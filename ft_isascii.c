// #include <stdio.h>

int	ft_isascii(unsigned char a)
{
	if(a >= 0 && a <= 0177)
	return (1);
	else
	return (0);
}

// int	main(void)
// {
// 	printf("%d",ft_isascii('a'));
// 	printf("%d",ft_isascii('G'));
// 	printf("%d",ft_isascii('k'));
// 	printf("%d",ft_isascii('='));
// 	printf("%d",ft_isascii('0'));
// 	printf("%d",ft_isascii(' '));
// 	return (0);
// }