#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n)
{
	char *number;
	int number_digits;
	int store_number;
	int j;

	store_number = n;
	number_digits = 0;
	while(n > 0)
	{
		number_digits ++;
		n = n / 10;
	}
	number = (char *) malloc (number_digits);
	j = number_digits - 1;
	while(store_number > 0)
	{
		number[j] = store_number % 10 + '0';
		j --;
		store_number = store_number / 10;
	}
	return number;
}

int main(void)
{
	printf("%s", ft_itoa(489));
	return 0;
}