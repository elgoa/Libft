#include <string.h>
#include <stdio.h>

int ft_strlen(char *str)
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

int  ft_strlcat(char *dst, char *src,int destsize)
{
    int i;
    int j;
    int store;

    i = 0;
    j = 0;
    store = ft_strlen(src) + ft_strlen(dst);
    while(dst[i] != 0)
    {
        i ++;
    }
    while(i < destsize - 1 && src[j] != 0)
    {
        dst[i] = src[j];
        i ++;
        j ++;
    }
    dst[i] = 0;
    return (store);
}

// int main(void)
// {
//     char dst[10]= "123";
//     char *str = "3532344";

//     ft_strlcat(dst, str, 10);
//     printf("%s",dst);

// }