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
