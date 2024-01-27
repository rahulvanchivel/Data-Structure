#include <stdio.h>
#include <string.h>
// Function to find the length of a string
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
// Function to concatenate two strings
void stringConcatenate(char dest[], char src[]) {
    int destLength = stringLength(dest);
    int i = 0;
    while (src[i] != '\0') {
        dest[destLength + i] = src[i];
        i++;
    }
    dest[destLength + i] = '\0';
}

// Function to compare two strings
int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1;
        } else if (str1[i] > str2[i]) {
            return 1;
        }
        i++;
    }
    if(str1[i]=='\0' && str2[i]=='\0'){
        return 0;
    }else if(str1[i]=='\0'){
        return -1;
    }
   
    else{
        return 1;
    }
    }

int main()
{
    // char str1[33]="panda";
    // char str2[35]="uthiyur";
    char str1[33];
    char str2[33];
    scanf("%s",str1);
    scanf("%s",str2);
    //print original string
    printf("String 1: %s\n",str1);
    printf("String 2: %s\n",str2);

    //finding the length of string

    printf("length of the string 1:%d\n",stringLength(str1));
    printf("length of the string 1:%d\n",stringLength(str2));

    //concantenate the string & print the result

    int comparisionResult=stringCompare(str1, str2);

    //condition
    if(comparisionResult==0)
    {
        printf("String 1 and String 2 are equal");
    }
    else if(comparisionResult<0)
    {
        printf("String 1 is less than String 2");

    }
    else
    {
        printf("String 1 is greater than string 2");
    }
    return 0;
}