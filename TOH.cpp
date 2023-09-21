#include<stdio.h>
void TOH(int n,int s,int t,int d)
{
	if(n>0)
{
	
	TOH(n-1,s,d,t);
	printf("%d->%d\n",s,d);
	TOH(n-1,t,s,d);
}
}

int main()
{
	TOH(5,1,2,3);
}

