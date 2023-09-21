#include<stdio.h>
#include<string.h>
int top = -1;

 
char stack[100], a[100];

 
void 
push (char n) 
{
  
 
top++;
  
 
stack[top] = n;

 
} 
int 


main () 
{
  
 
char c;
  
 
printf ("Enter the string\n");
  
 
scanf ("%s", a);
  
 
int n, i = 0, j = 0;
  
 
n = strlen (a);
  
 
while (i < n)
    
 
    {
      
 
push (a[i]);
      
 
i++;
    
 
}
  
 
while (stack[top] != '\0')
    
 
    {
      
 
c = stack[top];
      
 
a[j] = c;
      
 
top--;
      
 
j++;
    
 
}
  
 
printf ("\nReverse String is : %s ", a);

 
 
}



