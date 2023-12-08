#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    int i;
    int j;
    char *ptr;
    char *srcptr;

    i = 0;
    j = 0;
    ptr = dst;
    srcptr = (char *)src;
    while(i < len)
    {
        while (j < len)
        {
            if(&src[i] == &dst[j])
            return dst;
            j ++;
        }
        j = 0;
        i ++;
    }
    while(i < len)
    {
        ptr[i] = srcptr[i];
        i ++;
    }
    return dst;
}
