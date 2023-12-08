// #include <stdio.h>

int	ft_isdigit(unsigned char a)
{
	if(a >= '0' && a <= '9')
	return (1);
	else
	return (0);
}

// int	main(void)
// {
// 	printf("%d",ft_isdigit('a'));
// 	printf("%d",ft_isdigit('G'));
// 	printf("%d",ft_isdigit('k'));
// 	printf("%d",ft_isdigit('='));
// 	printf("%d",ft_isdigit('0'));
// 	printf("%d",ft_isdigit(' '));
// 	return (0);
// }