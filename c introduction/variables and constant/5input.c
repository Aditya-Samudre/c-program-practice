#include <stdio.h>

int main ()
{
   int age;
   printf("Enter your age : ");
   scanf("%d", &age);
   printf("Your age is = %d\n",age);
   
   double tim;
   printf("Enter your double time : ");
   scanf("%lf", &tim);
   printf("Your time is = %.1lf\n",tim);
   
   char monthe;
   printf("Enter your monthe : ");
   scanf("\n%c", &monthe);
   printf("Your monthe is = %c",monthe);
}