import streamlit as st
import sys  # 用于与 Python 解释器交互
import os   # 用于与操作系统交互

# 获取当前文件所在目录的父目录（即 weather-cli 根目录）
parent_dir = os.path.dirname(os.path.dirname(__file__))
# __file__ 是一个特殊变量，表示当前 Python 文件的路径。

# 把这个路径加入 Python 的模块搜索列表
sys.path.append(parent_dir)

# 现在可以导入上层目录中的模块了
from api_client import fetch_weather
from formatter import format_weather
from pypinyin import lazy_pinyin



st.title('天气查询工具')

city = st.text_input('请输入城市名（拼音或中文）')

if st.button('查询'):
    if not city:
        st.warning('请输入城市名')
    else:
        # 中文转拼音
        city_pinyin = ''.join(lazy_pinyin(city))
        try:
            data = fetch_weather(city_pinyin)
            result = format_weather(data,city)
            st.success(result)
        except Exception as e:
            st.error(f'查询失败：{e}')