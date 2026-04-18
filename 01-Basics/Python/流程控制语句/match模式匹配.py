day = input ('请输入星期几(1-7))')

match day:
    case '1':
        print('周一：工作会议日')
    case '2':
        print('周二：学习培训日')
    case '3':
        print('周三：项目开发日')
    case '4':
        print('周四:代码审查日')
    case '5':
        print('周五：总结规划日')
    case '6'|'7':
        print('周末：休息放松')
    case _: # 匹配其他所有情况的
        print('输入有误')