#include <unistd.h>

void ft_print_comb(void)
{
    int c1 = 48;
    int c2;
    int c3;

    while (c1<56)  
    {
        c2=c1+1; 
        while(c2<57) 
        {
            c3=c2+1;
            while(c3<58)
            {
                write(1,&c1,1); 
                write(1,&c2,1); 
                write(1,&c3,1);
                if (c1==55 && c2==56 && c3==57)
                {
                    return;
                }         
                write(1,",",1);
                write(1," ",1);
                

                c3++;
            }
        c2++; 
        }
    c1++; 
    }
} 
