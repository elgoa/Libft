#include "libft.h"

void	ft_putnbr_fd(int number, int fd)
{
	char Zahl;

	if(number > 0)
	{	
		ft_putnbr_fd(number/10, fd);
		Zahl = number % 10 + '0';	
		write(fd, &Zahl, 1);
	}
}
