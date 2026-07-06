lst = [1, 2, 3]          # 创建
lst.append(4)            # 尾部添加
lst[0] = 100             # 修改
print(len(lst))          # 长度
del lst[1]               # 删除索引1的元素

# 切片（左闭右开）
sub = lst[1:3]           # 索引1到2