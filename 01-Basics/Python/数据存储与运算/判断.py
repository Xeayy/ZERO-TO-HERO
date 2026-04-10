num = int(input('请输入数字：'))

if num > 0:
    print(f'{num}是正数')
elif num < 0:
    print(f'{num}是负数')
else:
    print(f'{num}是0')


username = input('请输入用户名：')
password = input('请输入密码：')

if username == 'admin' and password == '666888':
    print('登录成功1')
elif username == 'root' and password == '527527':
    print('登录成功2')
elif username == 'zhangsan' and password == '123456':
    print('登录成功')
else:
    print('登录失败，用户名或密码错误')


