#include <unistd.h>

void ft_print_alphabet(void)
{
    int abc = 97;
    while(abc<=122)
    {
        write(1,&abc,1);
        abc = abc + 1;
    }
}