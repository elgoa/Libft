#include <stdio.h>

char	*ft_strnstr(char *text, char *to_search, int n)
{
	int i;
	int j;
	
	i = 0;
	j = 0;

	if(*to_search == 0)
		return text;
	while(*text != 0 && i < n)
	{
		while(text[i] == to_search[j])
		{
			if(to_search[j] == 0)
				return text;
			i ++;
			j ++;
		}
		text ++;
	}
	return 0;
}

int	main(void)
{
	char *s1 ="bedebibibeb";
	char *s2 = "beb";

	printf("%s", ft_strnstr(s1,s2,11));
	return 0;
}
