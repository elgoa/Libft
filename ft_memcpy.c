#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src,size_t n)
{
    int i;
    char *ptr;
    char *srcptr;

    i = 0;
    ptr = dst;
    srcptr = (char *)src;
    while(i < n)
    {
        ptr[i] = srcptr[i];
        i ++;
    }
    return dst;
}

// int main(void)
// {
//     char dst[10];
//     char src[10]= "1234567890";
//     ft_memcpy(dst,src,10);
//     printf("%s", dst);
//     memcpy(dst,src,10);
//     printf("%s", dst);
//     return 0;
// }