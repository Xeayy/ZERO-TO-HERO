class Session:
    """管理一次多轮对话的历史记录"""

    def __init__(self):     # 初始化方法，当你用 Session() 创建实例时，Python 会自动调用它。
        # 初始化一个空的消息列表，用来存储对话历史
        self.messages = []

    def add_user_message(self, content):
        """添加一条用户消息到历史中"""
        self.messages.append({'role':'user', 'content':content})
    
    def add_assistant_message(self,content):
        """添加一条助手消息到历史中"""
        self.messages.append({'role':'assistant', 'content':content})

    def get_message(self):
        """返回完整的消息列表"""
        return self.messages
    