#include <stdio.h>

//division
void div(int i , int j)
{
	int c = i/j;
	printf("%d",c);
}

int main()
{
	int i,j;
    
	printf("Enter value : ");
	scanf("%d",&i);

	printf("Enter value : ");
	scanf("%d",&j);

    div (i,j);
}
