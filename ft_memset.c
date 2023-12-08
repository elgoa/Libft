#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	int i;
	unsigned char *ptr;

	ptr = b;
	i = 0;
	while(i < len)
	{
		ptr[i] = (unsigned char) c;
		i ++;
	}
	return b;
}
