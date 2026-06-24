import os
import sys
import streamlit as st

# 将项目根目录添加到系统路径，以便能够导入同级的 llm 和 memory 模块
sys.path.append(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

from memory.session import Session
from llm.deepseek_client import chat, chat_stream

# 页面基本设置
st.set_page_config(page_title = 'AI CHAT',page_icon = '🤖')
st.title('AI CHAT')

# 初始化会话状态
if 'session' not in st.session_state:
# st.session_state 是 Streamlit 提供的全局字典，用来在多次页面刷新之间保存数据。它类似于前端的“状态管理”。
    st.session_state.session = Session()

if 'messages' not in st.session_state:
    st.session_state.messages = []

# 清空对话按钮
if st.button('清空对话'):
    st.session_state.session = Session()    # 创建一个全新的Session
    st.session_state.messages = []      # 清空聊天记录
    st.rerun()      # 立即刷新页面，显示干净的界面

# 展示历史消息
for msg in st.session_state.messages:
    with st.chat_message(msg['role']):
        st.write(msg['content'])

# 处理用户输入
if user_input := st.chat_input('请输入你的消息'):
# := 是 Python 的海象运算符，表示“赋值给 user_input 然后判断它是否为真（非空）”。
    # 1.将用户消息加入 Session 和显示列表
    st.session_state.session.add_user_message(user_input)
    st.session_state.messages.append({'role':'user','content':user_input})

    # 2.获取当前完整对话历史
    full_history = st.session_state.session.get_message()

    # 3.在界面上预先显示一个助手气泡（空的），然后用流式填充
    with st.chat_message('assistant'):
        # 创建一个占位符，准备逐块写入
        placeholder = st.empty()
        full_response = ''
        # 调用流式生成器，逐块显示
        for chunk in chat_stream(full_history):
            full_response += chunk
            placeholder.markdown(full_response + "▌")  # 光标效果
        # 流结束后，显示最终结果（去掉光标）
        placeholder.markdown(full_response)
        
        # 将最终回答保存到 reply 变量，供后面存储历史记录使用
        reply = full_response

    # 4. 将助手回复加入 Session 和显示列表
    st.session_state.session.add_assistant_message(reply)
    st.session_state.messages.append({"role": "assistant", "content": reply})

    # 5. 刷新页面以显示新的回复
    st.rerun()