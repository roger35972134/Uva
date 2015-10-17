#include <stdio.h>

int main( void )
{
    int i, n, j;
    while (1)
    {
        if (scanf("%d", &n) < 1) break;
        if (n == 2)
        {  
            for (i = 0; i < 10; i ++)
                for (j = 0; j < 10; j ++)
                {
                    if ( i + j >= 10) break;
                    if ((i + j)*(i + j) == (i*10 + j))
                      printf("%02d\n",(i*10 + j));
                }
        }
        if (n == 4)
        {  
            for (i = 0; i < 100; i ++)
                for (j = 0; j < 100; j ++)
                {
                    if ( i + j >= 100) break;
                    if ((i + j)*(i + j) == (i*100 + j))
                      printf("%04d\n",(i*100 + j));
                }
        }
        if (n == 6)
        {  
            for (i = 0; i < 1000; i ++)
                for (j = 0; j < 1000; j ++)
                {
                    if ( i + j >= 1000) break;
                    if ((i + j)*(i + j) == (i*1000 + j))
                      printf("%06d\n",(i*1000 + j));
                }
        }
        if (n == 8)
        {  
            for (i = 0; i < 10000; i ++)
                for (j = 0; j < 10000; j ++)
                {
                    if ( i + j >= 10000) break;
                    if ((i + j)*(i + j) == (i*10000 + j))
                      printf("%08d\n",(i*10000 + j));
                }
        }
    }
 return 0;
}
