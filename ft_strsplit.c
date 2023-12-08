#include "libft.h"

char **ft_strsplit(char const *s, char c)
{
	char	**strarray;
	int strcounter;
	int i;
	int j;
	int counter;

	i = 0;
	j = 0;
	counter = 0;
	strcounter = 1;
	while(s[i] != 0)
	{
		if(s[i] == c)
			strcounter ++;
		i ++;
	}
	// printf("%d", strcounter);
	strarray = (char **) malloc ((strcounter) * sizeof (char *));

	i = 0;
	while(s[i] != 0)
	{
		if(s[i] == c)
		{
			strarray[j] = (char *) malloc  (counter + 1);
			j ++;
			counter = 0;
		}
		counter ++;	
		i ++;
	}
	strarray[j] = (char *) malloc  (counter + 1);
	i = 0;
	j = 0;
	counter = 0;
	while(s[i] != 0)
	{
		strarray[j][counter] = s[i];


		counter ++;	
		i ++;
		if(s[i] == c)
		{
			strarray[j][counter] = 0;
			j ++;
			counter = 0;
		}
	}
	return strarray;
}
