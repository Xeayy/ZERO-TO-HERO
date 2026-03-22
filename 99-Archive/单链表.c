#include <stdio.h>
#include <stdlib.h>

// 定义链表结点
typedef struct LNode {
    int data;
    struct LNode *next;
} LNode;

int main() {
    // 1. 构建一个简单链表：10 -> 20 -> 30 -> NULL
    LNode *head = (LNode*)malloc(sizeof(LNode)); // 头结点
    LNode *n1 = (LNode*)malloc(sizeof(LNode));
    LNode *n2 = (LNode*)malloc(sizeof(LNode));
    LNode *n3 = (LNode*)malloc(sizeof(LNode));

    head->next = n1;
    n1->data = 10; n1->next = n2;
    n2->data = 20; n2->next = n3;
    n3->data = 30; n3->next = NULL;

    // 我们要找 99（链表中不存在，故意让它找不到）
    int x = 99;

    // ==================================================
    // 👇 【A 选项代码】：这里会导致崩溃！
    // ==================================================
    /*
    LNode *p = head->next;
    while(p && p->data != x) {
        p = p->next;
    }
    // 当找不到 x 时，p 是 NULL，这里访问 p->data 会直接崩溃
    if(p->data == x) {
        printf("A 选项: 找到了 %d\n", x);
    } else {
        printf("A 选项: 没找到 %d\n", x);
    }
    */

    // ==================================================
    // 👇 【C 选项代码】：安全正确，推荐运行这个
    // ==================================================
    LNode *p = head->next;
    while(p && p->data != x) {
        p = p->next;
    }
    // 直接返回 p，如果找到则 p 非空，没找到则 p 为 NULL，绝对安全
    if(p != NULL) {
        printf("C 选项: 找到了 %d\n", p->data);
    } else {
        printf("C 选项: 没找到 %d,程序安全退出\n", x);
    }

    return 0;
}