#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const	*s,unsigned int start, size_t len)
{
	char	*substr;
	int i;

	i = 0;
	substr = (char *) malloc (len);
	if(substr == NULL)
		return NULL;
	while(i < (int)len)
	{
		substr[i] = s[start + i];
		i ++;
	}
	return substr;
}
