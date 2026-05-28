# 导入所需的库和设置
import os   # 提供了一些与操作系统交互的功能，比如读取环境变量。
from dotenv import load_dotenv  # 后面会用来加载 .env 文件。
from openai import OpenAI   # 帮助建立和 DeepSeek 服务器的连接。

load_dotenv()   # 读取项目根目录下的 .env 文件，使其变为环境变量

def chat(prompt):
    api_key = os.getenv('DEEPSEEK_API_KEY')
    if not api_key:
        return '错误，未找到 DEEPSEEK_API_KEY, 请检查 .env 文件。'

    client = OpenAI(
    api_key = api_key,
    base_url = '<https://api.deepseek.com>'
    )       # 把创建好的对象赋值给变量 client，之后就可以用 client 来调用聊天功能。

try:
    response = client.chat.completion.create(
        
    )


