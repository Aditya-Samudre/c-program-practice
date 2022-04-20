#include <stdio.h>

//multiplication
void mult(int i , int j) 
{
	int c = i*j;
	printf("%d",c);
}

int main()
{
	int i,j;
    
	printf("Enter value : ");
	scanf("%d",&i);

	printf("Enter value : ");
	scanf("%d",&j);

    mult (i,j);
}

