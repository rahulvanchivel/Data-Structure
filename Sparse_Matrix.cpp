#include<stdio.h>
#include<stdlib.h>
struct node 
{
  
int r, c, data;
   
struct node *next;
 
} *head = NULL, *temp, *new, *t;

void
insert () 
{
    printf("Enter a Number!");
  
int c = 1;

  
while (c)
    
    {
      
new = (struct node *) malloc (sizeof (struct node));
      
printf ("\nEnter the row : ");
      
scanf ("%d", &new->r);
      
printf ("\nenter the coloum : ");
      
scanf ("%d", &new->c);
      
printf ("\nEnter the data : ");
      
scanf ("%d", &new->data);
      
new->next = NULL;
      
if (head == NULL)
	
	{
	  
head = temp = new;
	
}
      
      else
	
	{
	  
temp->next = new;
	  
temp = new;
	
}
      
 
printf ("Press 1 for continue\n Press 0 for exit\n");
      
scanf ("%d", &c);
    
}
  
t = head;
  
while (t != NULL)
    
    {
      
printf ("%d ", t->data);
      
t = t->next;
    
}

}


void
add_row () 
{
  
int i = 0, n, sum = 0;
  
printf ("Enter how many row to add\n");
  
scanf ("%d", &n);
  
while (i < n)
    
    {
      
sum = 0;
      
t = head;
      
while (t != NULL)
	
	{
	  
if (t->r == i)
	    
	    {
	      
sum += t->data;
	    
}
	  
t = t->next;
	
}
      
printf ("%d\n", sum);
      
i++;
    
 
}

}


void
add_coloum () 
{
  
int i = 0, n, sum = 0;
  
printf ("Enter how many row to add\n");
  
scanf ("%d", &n);
  
while (i < n)
    
    {
      
sum = 0;
      
t = head;
      
while (t != NULL)
	
	{
	  
if (t->c == i)
	    
	    {
	      
sum += t->data;
	    
}
	  
t = t->next;
	
}
      
printf ("%d\n", sum);
      
i++;
    
}

}


void
main () 
{
  
int n;
  
while (1)
    
    {
      
scanf ("%d", &n);
      
 
if (n <= 3)
	
	{
	  
switch (n)
	    
	    {
	    
case 1:
	      insert ();
	      
break;
	    
case 2:
	      add_row ();
	      
break;
	    
case 3:
	      add_coloum ();
	      
break;
	    
}
	
}
      
      else
	
break;
    
}

}

