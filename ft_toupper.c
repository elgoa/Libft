#include <unistd.h>

void	ft_toupper(char *c)
{
	if(*c >= 'a' && *c <= 'z')
	*c = *c - 32;
}

// int main(void)
// {
// 	char c = 'c';
// 	char v = 'C';
	
// 	ft_toupper(&c);
// 	write (1, &c, 1);
// 	ft_toupper(&v);
// 	write (1, &v, 1);

	

// }