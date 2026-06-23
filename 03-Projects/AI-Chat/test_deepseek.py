from llm.deepseek_client import chat
from memory.session import Session

# 创建一个会话示例，它将记住整个对话历史
session = Session()

# 第一轮
session.add_user_message('你好，请记住我叫Xander。')
reply = chat(session.get_message())     # 传入当前所有信息
print('助手：',reply)
session.add_assistant_message(reply)     # 把助手的回复也加进去

# 第二轮
session.add_user_message('刚才我说我叫什么名字？')
reply = chat(session.get_message())
print('助手：',reply)
session.add_assistant_message(reply)

# 第三轮
session.add_user_message('用我的名字造一个简单的问候句。')
reply = chat(session.get_message())
print('助手：',reply)
session.add_assistant_message(reply)