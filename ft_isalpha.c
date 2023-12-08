// #include <stdio.h>

int	ft_isalpha(unsigned char a)
{
	if(a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z')
	return (1);
	else
	return (0);
}

// int	main(void)
// {
// 	printf("%d",ft_isalpha('a'));
// 	printf("%d",ft_isalpha('G'));
// 	printf("%d",ft_isalpha('k'));
// 	printf("%d",ft_isalpha('='));
// 	printf("%d",ft_isalpha('0'));
// 	printf("%d",ft_isalpha(' '));
// 	return (0);
// }