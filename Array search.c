#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],i,n,ele;
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter the element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search:\n");
    scanf("%d",ele);
    for(i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            printf("%d found at position %d\n",ele,i+1);
            return 0;
        }
        else
        {
            printf("Invalid search");
        }
    }
}