#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[15]="AI";
    char ch2[25]="CSD";

    strcat(ch1,ch2);
    printf("%s",ch1);
    return 0;
}