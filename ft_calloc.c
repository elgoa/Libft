     #include <stdlib.h>
	 #include <stdio.h>
	 #include <string.h>

     void *ft_memset(void *b, int c, size_t len)
{
    int i;
    unsigned char * ptr;
    
    i = 0;
    ptr = b;
    while(i < len)
    {
        ptr[i] = (unsigned char) c;
        i ++;
    }
    return b;
}
	 
	 void *ft_calloc(int count, int size)
	 {
		char *allocated_memory;
		int i;

		i = 0;
		allocated_memory = (void *) malloc (count * size);
		if(allocated_memory == 0)
			return NULL;
		ft_memset(allocated_memory, 0, count * size);
		return allocated_memory;
	 }

// int main() {
//     int *intArray;
//     char *str;
    
//     // Testfall 1: Allokieren und Initialisieren eines Integer-Arrays
//     intArray = (int *)ft_calloc(5, sizeof(int));
//     printf("Integer-Array nach calloc:\n");
//     for (int i = 0; i < 5; ++i) {
//         printf("%d ", intArray[i]);  // Sollte 0 sein, da calloc Speicher mit Nullen initialisiert
//     }
//     printf("\n");
//     free(intArray);  // Speicher freigeben
    
//     // Testfall 2: Allokieren und Initialisieren einer Zeichenkette
//     str = (char *)ft_calloc(10, sizeof(char));
//     strcpy(str, "Hello");
//     printf("Zeichenkette nach calloc: %s\n", str);  // Sollte "Hello" sein
//     free(str);  // Speicher freigeben

//     return 0;
// }