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

int  ft_strlcpy(char *dst, char *src,int dstsize)
{
    int i;

    i = 0;
    while(i < dstsize - 1 && src[i] != 0)
    {
        dst[i] = src[i];
        i ++;
    }
    dst[i] = 0;
    return (ft_strlen(src));
}

int main(void)
{
    char dst[4];
    char *str = "3532344";

    printf("%d",ft_strlcpy(dst, str, 4));
    printf("%s",dst);

}