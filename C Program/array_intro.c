#include <stdio.h>

int main(void)
{
	int n;
	printf("how many exams you took?: ");
	scanf("%i",&n);
	int scores[n];						//array
	int sum;
	int i;

	sum = 0;
	for (i = 0; i < n; i++)
	{
		printf("\n Enter the marks scored: ");
		scanf("%i",&scores[i]);					// assigning values to array
		sum = sum + scores[i];
	}
	float average = sum/n;
	printf("The average: %f",average);
}