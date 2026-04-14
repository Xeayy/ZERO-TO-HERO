"""
# 计算 1-100 之间所有的奇数之和

total = 0;

for i in range(1,101,2):
    total += i

print(' 1-100之间的奇数累加之和：',total)
"""

# 计算 100-500 之间所有3的倍速的数字之和

total = 0

for i in range(100,501):
    if i % 3 == 0:
        total += i

print('数字之和为',total)