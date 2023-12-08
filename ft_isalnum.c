// #include <stdio.h>

int	ft_isalnum(unsigned char a)
{
	if(a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z')
	return (1);
    if(a >= '0' && a <= '9')
	return (1);
	else
	return (0);
}

// int	main(void)
// {
// 	printf("%d",ft_isalnum('a'));
// 	printf("%d",ft_isalnum('G'));
// 	printf("%d",ft_isalnum('k'));
// 	printf("%d",ft_isalnum('='));
// 	printf("%d",ft_isalnum('0'));
// 	printf("%d",ft_isalnum(' '));
// 	return (0);
// }