#include <stdio.h>

int main(void)
{
    short a[10001] = {0}, min_x, max_x, h, left, right, i;
    
    /* 以a[i]表示x座標為i-1~i的最大高度 */
    scanf("%hd%hd%hd", &min_x, &h, &max_x);
    for (i = min_x+1; i <= max_x; i++)
        a[i] = h;
    while (scanf("%hd%hd%hd", &left, &h, &right) == 3,h)
    {
        if (right > max_x)
            max_x = right;
        for (i = left+1; i <= right; i++) 
            if (h > a[i])
                a[i] = h;
    }
    printf("%hd ", min_x);
    for (i = min_x+1; i <= max_x; i++)
    {
        while (a[i] == a[i+1])
            i++;
        printf("%hd %hd ", a[i], i);
    }
    printf("0\n");
    
    return 0;
}
