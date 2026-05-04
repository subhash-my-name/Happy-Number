#include <stdio.h>

int dSum (int n)
{
	int sum = 1, r;
	
	while(n != 0)
	{
		r = n % 10;
		n /= 10;
		sum += r * r;
	}

	return sum;
}

int isHappy (int n)
{
	if(n == 1) return 1;
	
	int sum = 0, r;

	// upon investigation, i found that numbers end up at 37, and 37 loops back to 37 itself.
	// therefore i concluded that sum ending up as 37 is the case for unhappy numbers.
	// although it is not mathematically rigorous, i had no clue how to solve this question.
	// therefore, to find a pattern, i picked random multi-digit numbers and those who were not happy,
	// ended up at 37. so i simply assumed that 37 is the mother of sadness.
	while(sum != 1 && sum != 37)
	{
		sum = dSum(n);
		n = sum;
	}
	
	if(sum == 1) return 1;
	else return 0;
}

int main()
{
	unsigned int n;
	printf("Enter a positive number: ");
	scanf("%d", &n);
	printf("%d\n", isHappy(n));
	return 0;
}
