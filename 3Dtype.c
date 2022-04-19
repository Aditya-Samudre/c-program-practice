#include <stdio.h>

int main ()
{
    int A = 1;
    printf("A = %d\n",A);

    char B = 'a';
    printf("B = %c\n",B);
    
    //.1 is to remove 0
    float C = 1.1;
    printf("C = %.1f\n",C);

    double D = 1.2;
    printf("D = %.1lf\n",D);
}