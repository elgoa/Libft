// #include <stdio.h>

char	*ft_memchr(char *s, int c, int size)
{
	int i;

	i = 0;
	while(s[i] != c && i < size)
	{
		i ++;
	}
	return &s[i];
}

// int main(void)
// {
// 	char *s = "Hallo wie geht es dir ";
// 	printf("%s", ft_memchr(s, 119, 21));
// }