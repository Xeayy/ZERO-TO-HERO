# 案例1： 邮箱格验证：用户输入一个邮箱，验证邮箱格式是否正确（包含一个@和至少一个.），如果输入正确，输出“邮箱格式正确”，否则输出”邮箱格式错误“。

# 法一：
"""
# 1. 接受用户输入的邮件
mail = input('请输入邮箱：')

# 2. 判断邮箱的格式
if mail.count('@') == 1 and mail.count('.') >= 1:
    print(f'{mail} 是合法的邮箱')
else:
    print(f'{mail} 是非法的邮箱')
"""

# 法二:     in 运算符 ---> 判断字串是否存在字符串中，存在，返回True；否则，返回False
# 1. 接收用户输入的邮箱
mail = input('请输入邮箱：')

# 2.判断邮箱的格式
if mail.count('@') == 1 and '.' in mail:
    print(f'{mail} 是合法的邮箱')
else:
    print(f'{mail} 是非法的邮箱')