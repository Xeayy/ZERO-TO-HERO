# 字符串 ---> 不可变性（无法修改），有序性，可迭代性
s = 'Hello-Python'

print(s[4]) # 正向索引 o
print(s[-8]) # 反向索引 o

for i in s:
    print(i)

# 切片
print(s[0:5:1]) #Hello
print(s[:5:1])  #Hello
print(s[:5:])   #Hello
print(s[:5])    #Hello

print(s[6:12:1])    #Python
print(s[6::1])      #Python

print('---------------------')
# 步长 ---> 正数：从前往后截取； 负数：从后往前截取
print(s[-1:-7:-1])
print(s[::-1])