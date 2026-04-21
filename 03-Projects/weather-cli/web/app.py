import streamlit as st

st.title('天气查询工具')

city = st.text_input('请输入城市名（拼音或中文）')

if st.button('查询'):
    st.write('查询功能开发中...')