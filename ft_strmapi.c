#include "libft.h"

char *ft_strmapi(char const *s,char (*f)(unsigned int, char))
{
	int i;
	char *copy_s;

	copy_s =(char *) malloc (ft_strlen(s) + 1);

	i = 0;

	while(s[i] != 0)
	{
		copy_s[i] = f(i, s[i]);
		i ++;
	}
	copy_s[i] = 0;
	return copy_s;
}
