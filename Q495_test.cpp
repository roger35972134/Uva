#include <stdio.h>

#define SIZE 1100
#define N 5001

char table[N][SIZE] = {
    {0},
    {1},
    {0}
};

int main(void)
{
    int n, i, j;
    char s, carry;
    
    // Precalculation
    for (i = 2; i < N; i++)
    {
        for (j = carry = 0; j < SIZE; j++)
        {
            s = table[i-1][j] + table[i-2][j] + carry;
            table[i][j] = s%10;
            carry = s/10;
        }
    }

    while (scanf("%d", &n) == 1)
    {
        printf("The Fibonacci number for %d is ", n);
        if (n == 0)
        {
            printf("0\n");
            continue;
        }
        
        i = SIZE-1;
        while (table[n][i] == 0)
            i--;
        for (; i >= 0; i--)
            printf("%d", table[n][i]);
        puts("");
    }

    return 0;
}
