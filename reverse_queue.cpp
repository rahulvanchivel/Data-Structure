#include<stdio.h>
#define p 5
int fro = -1, rear = -1, top = -1, a[p], b[p];

void
enqueue (int n) 
{
  
if (fro == -1 && rear == -1)
    
    {
      
fro++;
      
a[++rear] = n;
    
}
  
  else
    
    {
      
a[++rear] = n;
    
}
  
printf ("\nNumber is add in queue");

}


void
push (int x) 
{
  
top++;
  
b[top] = x;
  
printf ("\nNumber is added in stack");

} 
void

dequeue () 
{
  
int n = (rear - (fro)) + 1, x;
  
for (int i = 0; i < n; i++)
    
    {
      
x = a[fro];
      
fro++;
      
 
push (x);
    
} 
printf ("\nNumber is delete in queue");
  
rear = -1;

} 
void

pop () 
{
  
while (top != -1)
    
    {
      
enqueue (b[top]);
      
top--;
    
}
  
printf ("\nNumber is poped");

}


void
display_queue () 
{
  
int i = 0;
  
while (i < p)
    
    {
      
printf ("%d ", a[i]);
      
i++;
    
}

}


int main () 
{
  
int n, num;
  
while (1)
    
    {
      
printf
	("\n Press 1 Insert number\n Press 2 Dequeue \n Press 3 Pop\n Press 4 Display queue\n");
      
 
scanf ("%d", &n);
      
if (n <= 4)
	
	{
	  
switch (n)
	    
	    {
	    
case 1:
	      printf ("Enter the number : ");
	      
scanf ("%d", &num);
	      
enqueue (num);
	      
break;
	    
case 2:
	      dequeue ();
	      
break;
	    
case 3:
	      pop ();
	      
break;
	    
case 4:
	      display_queue ();
	      
break;
	    
}
	
}
    
}

}

