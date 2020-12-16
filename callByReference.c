
#include <stdio.h>

//Declaring a method
void swap(int*, int*);


void main()
{
   int a, b;
   printf("Enter the value of a and b\n");
   scanf("%d%d",&a,&b);
   printf("Before Swapping\nx = %d\ny = %d\n", a, b);

   //method definition
   void swap(int *a, int *b)
   {
   int temp;

   temp = *b;
   *b = *a;
   *a = temp;
   }

   //method call
   //using ampersand(&) to pass the address of the variable rather than passing the value
   swap(&a, &b);

   printf("After Swapping\na = %d\nb = %d\n", a, b);
}
