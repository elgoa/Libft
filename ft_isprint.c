// #include <stdio.h>
// #include <ctype.h>

int	ft_isprint(unsigned char a)
{
	if(a >= 32 && a <= 126)
	return (1);
	else
	return (0);
}

// int	main(void)
// {
// 	printf("%d",ft_isprint('a'));
// 	printf("%d",ft_isprint('G'));
// 	printf("%d",ft_isprint('k'));
// 	printf("%d",ft_isprint('='));
// 	printf("%d",ft_isprint('0'));
// 	printf("%d",ft_isprint(' '));
//     printf("%d",isprint('a'));
// 	printf("%d",isprint('G'));
// 	printf("%d",isprint('k'));
// 	printf("%d",isprint('='));
// 	printf("%d",isprint('0'));
// 	printf("%d",isprint(' '));
// 	return (0);
// }