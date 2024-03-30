#include <unistd.h>

 void ft_print_numbers(void)
 {
    int num = 48;
    while(num<=57) 
    { 
        write(1,&num,1);
        num++;
    }
 }