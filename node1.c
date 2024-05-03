#include <stdio.h>
typedef struct LinkedList{
    int val;
    struct LinkedList *next;
}node;
node * ins_b(int a,node *head)
{
    node *new;
    new= (node *) malloc (sizeof(node));
    new->val=a;
    /*if (head==NULL)
        head=new;
    else{*/
      new->next=head;
        head=new;
    //}
    return head;
}
node * ins_e(int a, node * head)
{
    node *new,*p;
    new= (node *) malloc (sizeof(node));
    new->val=a;
    if (head==NULL)
        head=new;
    else{
        p=head;
         while(p->next)
          {
            p=p->next;
         }
         p->next=new;
    }
    return head;
}

node *ins_pos(int a,int pos,node *head)
{
    node *new;
    node *q,*p;
    int i;
    new= (node *) malloc (sizeof(node));
    new->val=a;
    if(pos==1)
    {
    new->next=head;
    head=new;
    }
    else
    {
    i=1;
    p=head;
    q=NULL;
        while(i<pos && p != NULL)
        {
            i++;
            q=p;
            p=p->next;
        }

    if(p==NULL)
        printf("the position is greater than the size of the list");
   else
   {
   new->next=p;
   q->next=new;
   }
        }
}

void display(node * head)
{
    node *p;
    if (head==NULL) printf("\n the list is empty \n");
    p=head;
    while(p!=NULL)
    {
     printf("%d\n",p->val);
     p=p->next;
    }

}
node *add_eba(int a,int x,node *head)
{
    node *p,*q;
    node *new;
    new= (node *) malloc (sizeof(node));
    new->val=a;
    if(head->val==x)
    {
        new->next=head;
        head=new;
    }
    else
    {
        p=head;
        q=NULL;
        while(p!=NULL && p->val != x)
        {
            q=p;
            p=p->next;
        }
        new->next=p;
        q->next=new;
    }
}
node *add_eaa(int a,int x,node *head)
{
    node *p;
    node *new;
    new= (node *) malloc (sizeof(node));
    new->val=a;
    if(head->val==x)
    {
        new->next=head;
        head=new;
    }
    else
    {
        p=head;
        q=NULL;
        while(p!=NULL && p->val != x)
        {
            p=p->next;
        }
        new->next=p->next;
        p->next=new;
    }
}
node *del_b(int a,node *head)
{

}
int main()
{
    node *head = NULL;

return 0;
}
