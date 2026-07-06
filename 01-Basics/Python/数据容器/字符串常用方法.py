s = 'Hello-Python-World'

# find() 查找指定字符串第一次出现的索引位置
index = s.find('-')
print(index)

# count() 统计子字符串在指定字符串中出现的次数
c = s.count('o')
print(c)

# upper() 转为大写
su = s.upper()
print(su)

# lower() 传为小写
sl = s.lower()
print(sl)

# split() 将字符串按照指定字符串切割 - 列表
slist = s.split('-')
print(slist)

# replace() 将字符串中的指定子串替换为新的内容
sr = s.replace('-','_')
print(sr)

# startswith() / endswith() 判断字符串是否是以字符串开头 / 结尾，返回布尔值
print(s.startswith('Hello'))
print(s.endswith('Python'))