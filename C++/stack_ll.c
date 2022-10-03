#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int isempty(struct node * top)
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}

int isfull(struct node* top)
{
    struct node*p = (struct node*)malloc(sizeof(struct node));
    if(p==NULL) return 1;
    return 0;
}

struct node* push(int data,struct node*top)
{
    if(!isfull(top))
    {
        struct node* n = (struct node*)malloc(sizeof(struct node));
        n->data = data;
        n->next = top;
        top = n;
        return top;
    }
    else printf("stack overflow\n");
}

struct node * pop(struct node*top)
{
    if(!isempty(top))
    {
        struct node* n = top;
        top = top->next;
        int v = n->data;
        printf("the popped value is %d",v);
        free(n);
        return top;
    }
    else printf("stack underflow\n");
}

int peek(int index,struct node*top)
{
    struct node*ptr = top;
    int i=0;
    while(i<index && ptr!=NULL)
    {
        ptr=ptr->next;
        i++;
    }
    if(ptr!=NULL) return ptr->data;
    else  return -1;
}

int stackbottom(struct node*top)
{
    struct node*ptr = top;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    return ptr->data;
}

void display(struct node*top)
{
    printf("\n");
    while(top!=NULL)
    {
        printf("%d ",top->data);
        top = top->next;
    }
    printf("\n");
}

int main()
{
    struct node *top = NULL;
    top = push(10,top);
    top = push(20,top);
    top = push(30,top);
    display(top);
  
    top = pop(top);
    display(top);
    
    int p = peek(3,top);
    if(p!=-1)
      printf("value at the given index is :%d \n",p);
    
    printf("value at the bottom of the stack is :%d\n",stackbottom(top));
    return 0;
}
