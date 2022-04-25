#include <stdio.h>

void Calculation(int number1, int number2)
{
    int a = number1 + number2;
    printf("Addition = %d",a);
    
    int b = number1 - number2;
    printf("\nSubtraction = %d",b);
    
    int c = number1 * number2;
    printf("\nMultiplication = %d",a);
    
    int d = number1 / number2;
    printf("\nDivision = %d",a);
}
int main ()
{
     int number1,number2;
     
     printf("Enter value : ");
    scanf("%d",&number1);
    
    printf("Enter value : ");
    scanf("%d",&number2);
    
    Calculation (number1,number2);
}