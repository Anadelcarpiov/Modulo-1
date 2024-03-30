#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    int abc = 122;
    while(abc>=97)
    {
        write(1,&abc,1);
        abc = abc-1;
    }
}