#include <stdio.h>

#define MIN(a,b) (a < b ? a : b)
#define MIN_3(a,b,c) MIN(MIN(a,b), c)

int main(int argc, char const* argv[])
{
    int i, ugly_num[1501];
    int g5, g3, g2, max_ugly_num;

    ugly_num[1] = g5 = g3 = g2 = max_ugly_num = 1;
    for (i = 2; i < 1501; i++) {

        while (ugly_num[g5] * 5 <= max_ugly_num)
            g5++;

        while (ugly_num[g3] * 3 <= max_ugly_num)
            g3++;

        while (ugly_num[g2] * 2 <= max_ugly_num)
            g2++;

        ugly_num[i] = MIN_3(ugly_num[g5] * 5,
                            ugly_num[g3] * 3,
                            ugly_num[g2] * 2);
        max_ugly_num = ugly_num[i];

    }

    printf("The 1500'th ugly number is %d.\n", ugly_num[1500]);

    return 0;
}
