#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[15]="abc";
    char ch2[25]="acd";
    int res;
    res=strncmp(ch1,ch2,1);
    printf("%d\n",res);

    res=strncmp(ch1,ch2,2);
    printf("%d",res);
    return 0;
}