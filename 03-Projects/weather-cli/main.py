from api_client import fetch_weather
from formatter import format_weather

city = input('请输入城市名(拼音)：')

try:
    # 1. 从 API 获取原始数据
    data = fetch_weather(city)
    # 2. 格式化成好看的字符串
    result = format_weather(data,city)
    # 3. 输出
    print(result)
except Exception as e:
    # 任何错误都被捕获，打印友好提示，程序不崩溃
    print(f'查询失败:{e}')