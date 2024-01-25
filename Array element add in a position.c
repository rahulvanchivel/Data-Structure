#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5};
    int element=10;
    int position,i;
    int n=5;
    printf("Enter the Position Number: ");
    scanf("%d", &position);
    printf("Array before the insertion:\n");
    for(i=0;i<n;++i)
    {
        printf("%d\n",arr[i]);
    }
    if(position<0 || position>n)
    {
        printf("Invalid position for insertion\n");
    }
    //shift element to make space between
    for(i=n-1;i>=position;--i)
    {
        arr[i+1]=arr[i];
    }
    arr[position]=element;
    n++;
    printf("After the insertion\n");

    for(i=0;i<n;++i)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
