#include <stdio.h>

char	*ft_strchr(char *s, int c)
{
	while(*s != c && *s != 0)
	{
		s ++;
	}
	return s;
}

// int main(void)
// {
// 	char *s = "Hallo wie geht es dir ";
// 	printf("%s", ft_strchr(s, 119));
// }