#include <stdio.h>

int main()
{
	
	//check if canditate is eligible to vote or not 
	int a;
	printf("Enter your age : ");
	scanf("%d",&a);
	
	if (a >= 18)
	{
		printf("Your are eligible to vote.\n\n");
	}
	else if (a >= 120)
	{
		printf("Not valid\n\n");
	}
	else 
	{
		printf("Sorry, your are not eligible to vote\n\n ");
	}
	
	//voting option
	int b;
	printf("1.Aditya\n2.Abhay\n3.Raj\n\n");
	printf("Please vote :");
	scanf("%d",&b);
	
	if (b = 1)
	{
		printf("Thank you for voting Aditya . ");
	}
	else if (b = 2)
	{
		printf("Thank you for voting Abhay .");
	}
	else if (b = 3)
	{
		printf("Thank you for voting Raj .");
	}	
}
