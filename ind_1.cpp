#include <stdio.h>
 
int main()
{
   int x, y,temp;
   int *a, *b;
 
   printf("Enter the value of x\n");
   scanf("%d", &x);
   printf("Enter value of y\n");
   scanf("%d",&y);
 
   printf("Value before swapping x = %d y = %d\n", x, y);
 
   a = &x;
   b = &y;
 
   temp = *b;
   *b = *a;
   *a = temp;
 
   printf("Value after swapping x = %d y = %d\n", x, y);
 
   
}
