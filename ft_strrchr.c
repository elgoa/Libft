#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(*str != 0)
    {
        i ++;
        str ++;
    }
    return (i);
}

char	*ft_strrchr(char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while(s[i] != c && i > 0)
	{
		i --;
	}
	if(i == 0)
	s = NULL;
	return &s[i];
}

// int main(void)
// {
// 	char *s = "Hallo wie geht es dir ";
// 	printf("%s", ft_strrchr(s, 101));
// }