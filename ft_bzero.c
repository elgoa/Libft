#include "libft.h"

void   ft_bzero(void *s, size_t n)
{
    int i;
    unsigned char *ptr;

    i = 0;
    ptr = s;
    while(i < n)
    {
        ptr[i] = 0;
        i ++;
    }
}

// int main(void)
// {
//     char array[5];
    
//     ft_bzero(array , 5);
//         for (int i = 0; i < 5; ++i) {
//         printf("%d", array[i]);
//     }
// }