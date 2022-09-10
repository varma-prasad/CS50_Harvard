#include <stdio.h>

void meow(int n);
float discount(float price,int percentage);

int main(void)
{
	meow(3);
	float regular;
	printf("enter the regular prize: ");
	scanf("%f",&regular);
	int percent_off;
	printf("How much percentage off you need: ");
	scanf("%d",&percent_off);
	float sale = discount(regular,percent_off);
	printf("the sale price: %.2f\n",sale);
}

void meow(int n)					// function with no return value
{
	for (int i = 0; i < n; i++)
	{
		printf("meow\n");
	}
	
}

float discount(float price,int percentage)		// function with return value
{
	return price * (100-percentage)/100;
}