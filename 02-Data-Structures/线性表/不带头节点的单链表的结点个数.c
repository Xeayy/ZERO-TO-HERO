#include <stdio.h>
#include <stdlib.h>

typedef struct LNode {
    int data;
    struct LNode *next;
} LNode;

int countNode(LNode *head) {
    int count = 0;
    LNode *p = head;
    
    while (p != NULL) {
        count++;
        p = p->next;
    }
    return count;
}

int main() {
    LNode *head = NULL;
    LNode *n1 = (LNode*)malloc(sizeof(LNode));
    LNode *n2 = (LNode*)malloc(sizeof(LNode));
    LNode *n3 = (LNode*)malloc(sizeof(LNode));
    
    n1->data = 10;
    n1->next = n2;
    n2->data = 20;
    n2->next = n3;
    n3->data = 30;
    n3->next = NULL;
    head = n1;

    int num = countNode(head);
    printf("不带头结点单链表的结点个数为：%d\n", num);
    
    LNode *emptyHead = NULL;
    int emptyNum = countNode(emptyHead);
    printf("空链表的结点个数为：%d\n", emptyNum);
    
    free(n1);
    free(n2);
    free(n3);
    return 0;
}