#include <stdio.h>
#include <stdlib.h>
#define flag -1

typedef struct
{
	float coef;
	int expn;
}DataType;

typedef struct Node
{
	DataType data;
	struct Node *next;
}LNode,*LinkList;




LinkList Add_L(LinkList P,LinkList Q)
{
LNode *p,*q;
LNode *r,*s;		
	float sum;			
	p = P -> next;
	q = Q -> next;
	r = P;				
	
	while (p && q){
		if ( ( p->data).expn<( q->data).expn ){
			r -> next = p;
			r = r -> next;
			p = p -> next;
		}else if ( (p -> data ).expn > ( q -> data ).expn ){
			r -> next = q;
			r = r -> next;
			q = q -> next;
		}  else{
			sum = ( p -> data).coef + ( q -> data ).coef;
			if ( sum != 0 ){
				( p -> data ).coef = sum;
				r -> next = p;
				r = r -> next;
				p = p -> next;
				s = q;
				q = q -> next;
				free (s);
			} else {
				s = p;
				p = p -> next;
				free (s);
				s = q;
				q = q -> next;
				free (s); }
	}
}
	if (p)
		r -> next = p;
	else
		r -> next = q;
	free (Q);
	return P;
}

/*

void CreateLinkList1 (LinkList L)
{ LNode *s;
  DataType x;
  scanf("%d",&x);
  while(x.expn != flag)
  {
	  s = (LinkList)malloc(sizeof(LNode));

	  s -> data = x;
	  s -> next = L -> next;
	  L -> next = s;
	  scanf("%d",&x);
  }
}

*/

void CreateLinkList2(LinkList L)
{
	LNode *r,*s;
	DataType x;
	
	scanf("%f %d",&x.coef,&x.expn);
	r = L;
	while (x.expn!=flag)
	{
		s = (LinkList)malloc(sizeof(LNode));
		
		s -> data = x;
		r -> next = s;
		r = s;
		scanf("%f %d",&x.coef,&x.expn);
	}
	r -> next = NULL;
}

void PrintLinkList(LinkList L)
{
	LNode *p;
	p = L -> next;
	while (p != NULL)
	{
		printf(" [%.2f] -> [%d] ",p->data.coef,p->data.expn);
		p = p->next;
	}
}

int main()
{
	LinkList L;
	LinkList Q;
	
	L = ( LinkList )malloc(sizeof(LNode));
	L -> next = NULL;
	
	Q = (LinkList)malloc(sizeof(LNode));
	Q -> next = NULL;
	CreateLinkList2(L);
	printf("第一个多项式L为:\n");
	PrintLinkList(L);
	
	CreateLinkList2(Q);
	printf("第二个多项式Q为：\n");
	PrintLinkList(Q);
	
	printf("\n");
	
	L = Add_L(L,Q);
	printf("相加后的多项式为：\n");
	PrintLinkList(L);
	
	return 0;
}
