# 导入所需的库和设置
import os   # 提供了一些与操作系统交互的功能，比如读取环境变量。
from dotenv import load_dotenv  # 后面会用来加载 .env 文件。
from openai import OpenAI   # 帮助建立和 DeepSeek 服务器的连接。

load_dotenv()   # 读取项目根目录下的 .env 文件，使其变为环境变量

def chat(messages):
    """
    将完整的消息列表发送给 DeepSeek，并返回模型的回复文本。
    参数:
        messages: 列表，元素格式如 {"role": "user", "content": "..."}
    返回:
        模型回复的字符串，如果出错则返回错误信息
    """
    api_key = os.getenv('DEEPSEEK_API_KEY')
    if not api_key:
        return '错误，未找到 DEEPSEEK_API_KEY, 请检查 .env 文件。'

    client = OpenAI(
    api_key = api_key,
    base_url = 'https://api.deepseek.com'
    )       # 把创建好的对象赋值给变量 client，之后就可以用 client 来调用聊天功能。

    try:
        response = client.chat.completions.create(
            model = 'deepseek-chat',
            messages = messages,
            stream = False
        )
        return response.choices[0].message.content

    except Exception as e:
        return f'调用失败:{str(e)}'


def chat_stream(messages):
    """
    将完整的消息列表发送给 DeepSeek，并以生成器方式逐块返回回复文本。
    参数：
        messages: 列表，元素格式如 {'role': 'user','content':'...'}
    生成：
        模型回复的字符串片段

    """
# 普通函数用 return 返回结果，函数就结束了。
# 生成器函数用 yield 返回结果，但函数不会结束，下次可以继续从 yield 后面执行，再 yield 下一个值。
    api_key = os.getenv('DEEPSEEK_API_KEY')
    if not api_key:
        yield '错误: 未找到 DEEPSEEK_API_KEY, 请检查 .env 文件。'
        return
    client = OpenAI(
        api_key = api_key,
        base_url='https://api.deepseek.com'
    )

    try:
        response = client.chat.completions.create(
            model = 'deepseek-chat',
            messages = messages,
            stream = True   # 关键： 开启流式
        )

        # 逐块读取流式相应
        for chunk in response:
            # chunk.choices[0].delta 可能包含 content(文本片段)
            # 遍历服务器发来的每一个数据块（chunk）
            delta = chunk.choices[0].delta
            if delta.content:
                yield delta.content

    except Exception as e:
        yield f'调用失败:{str(e)}'




