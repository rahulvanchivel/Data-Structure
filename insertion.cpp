
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int d;
    struct node *nxt;
}*h=NULL,*n,*t;

void insfro();
void insend();
void inspos();
void disp();

int main()
{
    int i=1,a;
    while(i)
    {
        scanf("%d",&a);
        switch(a)
        {
            case 1 :
            insfro();
            break;
            case 2 :
            insend();
            break;
            case 3 :
            inspos();
            break;
            case 4 :
            disp();
            break;
            case 5 :
            i=0;
            break;
            default :
            printf("Wrong choice");
            break;
        }
    }
}

void insend()
{
    n=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&n->d);
    n->nxt=NULL;
    if(h==NULL)
    {
        h=n;
    }
    else
    {
        t=h;
        while(t->nxt!=NULL)
        {
            t=t->nxt;
        }
        t->nxt=n;
    }
}

void insfro()
{
    n=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&n->d);
    n->nxt=NULL;
    if(h==NULL)
    {
        h=n;
        t=n;
    }
    else
    {
        n->nxt=h;
        h=n;
    }
}

void inspos()
{
    t=h;
    int p,i=2;
    n=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&p);
    scanf("%d",&n->d);
    n->nxt=NULL;
    while(i<p)
    {
        t=t->nxt;
        i++;
    }
    n->nxt=t->nxt;
    t->nxt=n;
}

void disp()
{
    t=h;
    while(t!=NULL)
    {
        
        printf("%d ",t->d);
        t=t->nxt;
        
    }
    printf("\n");
    
}
