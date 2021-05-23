#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x1, x2 = 9;

   x1 = x2 % 2;
   printf("X1 = %d \n", x1);

   x1 = x2 % 5;
   printf("X1 = %d \n", x1);
}
