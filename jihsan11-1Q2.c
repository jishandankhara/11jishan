#include <stdio.h>
 
void main()
{
   int x, y, *a, *b, j;
 
   printf("Enter the value of x:");
   scanf("%d",&x);
   printf("Enter the value of y:");
   scanf("%d",&y);
   printf("Before Swapping:\n");
   printf("x=%d\n",x);
   printf("x=%d\n",y);
   a = &x;
   b = &y;
 
   j = *b;
   *b = *a;
   *a = j;
 
   printf("After Swapping:\n");
    printf("x=%d\ns",x); 
	printf("y=%d",y);
}
 
