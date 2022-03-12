#include<stdio.h>
#include<stdlib.h>
#define N sizeof(Stacknode)
struct Stacknode
{
    long container;
    long cell;
    long data;
    Stacknode *next;
};
struct Stacknode *createStack()//创建储存栈头的链表头指针
{
    struct Stacknode *head=(struct Stacknode*)malloc(N);
    head->next=NULL;
    return head;
}
void push(struct Stacknode *head,long a,long b,long c)//压栈
{
   struct Stacknode *p=(struct Stacknode*)malloc(N);
   p->next=head->next;
   p->container=a;
   p->cell=b;
   p->data=c;
   head->next=p;
}
long pop(struct Stacknode *head,long a,long b) //弹出要查找的元素
{
    long c;
    struct Stacknode *p=head->next;
    while(p->container!=a&&p->cell!=b)
        p=p->next;
    c=p->data;
    return c;
}
int main()
{
    long n,q,i,choice,a,b,c;
    Stacknode *head;
    head=createStack();
    scanf("%ld%ld",&n,&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&choice);
        if(choice==1)
        {
            scanf("%ld%ld%ld",&a,&b,&c);
            push(head,a,b,c);
        }
        if(choice==2)
        {
            scanf("%ld%ld",&a,&b);
            c=pop(head,a,b);
            printf("%ld\n",c);
        }
    }
    return 0;
}
