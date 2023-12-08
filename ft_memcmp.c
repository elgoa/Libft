#include <stdio.h>

int	ft_memcmp(char *s1, char *s2, int size)
{
	int i;

	i = 0;
	while(i < size)
	{
		if (s1[i] != s2[i])
			return s1[i] - s2[i];
		i ++;
	}
	return 0;
}

// int main(void)

// {
// 	char *s1 = "abcdef";
// 	char *s2 = "abcdef";
// 	char *s3 = "abcdeg";
// 	char *s4 = "abcdee";

// 	printf("%d", ft_memcmp(s1,s2,6));
// 	printf("%d", ft_memcmp(s1,s3,6));
// 	printf("%d", ft_memcmp(s1,s4,6));
// 	return 0;
// }