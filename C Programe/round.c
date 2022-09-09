#include <stdio.h>
#include <math.h>

int main(void)
{
	float amount;
	printf("Enter the amount $: ");
	scanf("%f",&amount);
	int pennies = round(amount*100);
	printf("pennies: %i\n",pennies);
}