slogan = '原神' '启动' # 多个字符串字面量直接写
print(slogan)

slogan = '原神' + '牛逼' # +号码拼接
print(slogan)

s1 = '一点'
s2 = '也不牛逼'

print('原神' + ','+ s1  + s2)



name = 'Xander'
age = 18
major = '信息安全'
hobby = 'AI'

# str(int数字) ----> 将int类型的数字转为字符串
print('大家好，我是' + name + '，今年' + str(age) + '岁，学习的专业是' + major + '，爱好是' + hobby)
print(f'大家好，我是{name}，今年{age}岁，学习的专业是{major}，爱好是{hobby}')
