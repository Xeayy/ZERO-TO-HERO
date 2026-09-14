#include <stdio.h>
#include <stdlib.h>

typedef struct DNode {
    int data;
    struct DNode *prior;
    struct DNode *next;
} DNode;

void printDListReverse(DNode *head) {
    if (head == NULL || head->next == NULL)
        return;

    DNode *p = head;
    while (p->next != NULL)
        p = p->next;

    while (p != head) {
        printf("%d ", p->data);
        p = p->prior;
    }
    printf("\n");
}

int main() {
    DNode *head = (DNode*)malloc(sizeof(DNode));
    DNode *n1 = (DNode*)malloc(sizeof(DNode));
    DNode *n2 = (DNode*)malloc(sizeof(DNode));
    DNode *n3 = (DNode*)malloc(sizeof(DNode));
    DNode *n4 = (DNode*)malloc(sizeof(DNode));

    head->prior = NULL;
    head->next = n1;

    n1->data = 1;
    n1->prior = head;
    n1->next = n2;

    n2->data = 2;
    n2->prior = n1;
    n2->next = n3;

    n3->data = 3;
    n3->prior = n2;
    n3->next = n4;

    n4->data = 4;
    n4->prior = n3;
    n4->next = NULL;

    printf("从右向左打印双链表结果：");
    printDListReverse(head);

    free(n4);
    free(n3);
    free(n2);
    free(n1);
    free(head);
    return 0;
}