a = int(input('请输入第一个边的边长：'))
b = int(input('请输入第二个边的边长：'))
c = int(input('请输入第三个边的边长：'))

# 判断三角形的类型 - pass 是一个空语句，起到一个语法占位的作用
if a + b > c and a + c > b and b + c >a:
    if a == b and b == c:
        print(f'{a} {b} {c} 这三个边长构成等边三角形 ~')
    elif a == b or b == c or a == c:
        print(f'{a} {b} {c} 这三个边长构成等腰三角形 ~')
    else:
        print(f'{a} {b} {c} 这三个边长构成普通三角形 ~')
else:
    print(f'{a} {b} {c} 这三个边长不能构成三角形！')