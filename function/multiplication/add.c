#include <stdio.h>

//addition
void add(int i , int j)
{
    int c = i+j;
	printf("%d",c);

}

int main()
{
	int i,j;

	printf("Enter value : ");
	scanf("%d",&i);
	
	printf("Enter value : ");
	scanf("%d",&j);

	add (i,j);
}
