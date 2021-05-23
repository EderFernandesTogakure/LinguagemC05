#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f1, f2 = 5.25;

    f1 = f2 + 10 / 2.0;
    printf("f1 = %f \n", f1);

    f1 = (f2 + 10) / 2.0;
    printf("f1 = %f \n", f1);

}
