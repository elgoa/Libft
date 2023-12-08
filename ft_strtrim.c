#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char const *str)
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

char *ft_strtrim(char const *s, char const *set)
{
	int i;
	int j;
	int k;
	int set_counter;
	char *trimmed_str;

	i = 0;
	k = 0;
	j = 0;
	set_counter = 0;
	while(s[i] != 0)
	{
		while(s[i] == set[j])
		{
			i ++;
			j ++;
		}
		if(set[j] == 0)
			set_counter ++;
		j = 0;
		i ++;
	}
	printf("%d", set_counter);
	trimmed_str = (char *) malloc (ft_strlen(s) - set_counter * ft_strlen(set));
	i = 0;
	j = 0;
	while(*s != 0)
	{
		while(s[i] == set[j])
		{
			i ++;
			j ++;
		}
		if(set[j] == 0)
			s = &s[i];
		i = 0;
		j = 0;
		trimmed_str[k] = *s;
		k ++;
		s ++;
	}
	return trimmed_str;
}

int main(void)
{
	char *string = "hallo wie geht es dir heute ist es heute nicht ein schoener tag";
	char *set = "es ";

	printf("%s", ft_strtrim(string, set));
	return 0;
}