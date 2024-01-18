#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
    int d;
    struct node *nxt;
}*h,*n,*t;
void ins(int e)
{
    n=(struct node *)malloc(sizeof(struct node));
    n->d=e;
    n->nxt=NULL;
    if(h==NULL)
    {
        h=n;
        t=h;
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
void disp(int n)
{
    t=h;
    int q=0;
    while(t!=NULL)
    {
        n=n-1;
        q=(t->d*pow(2,n))+q;
        
        t=t->nxt;
    }
    printf("%d ",q);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        ins(a[i]);
    }
    disp(n);  
}
