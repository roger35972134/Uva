#include <stdio.h>

int main(void)
{
    int a, b, c, p, d;
    
    while (scanf("%d%d%d%d", &p, &a, &b, &c) == 4 && (p||a||b||c))
    {
        d = 0;
        if (p < a)
            d = d + 40 - (a-p);
        else
            d = d + (p-a);
        
        if (a < b)
            d = d + (b-a);
        else
            d = d + 40 - (a-b);
        
        if (b < c)
            d = d + 40 - (c-b);
        else
            d = d + (b-c);
        
        printf("%d\n", 1080 + 9*d);
    }
    
    return 0;
}
