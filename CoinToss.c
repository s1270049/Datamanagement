#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char CoinToss(int);
#define N 3

int main()
{
    char coin;
    int i, j, num;
    int loscou = 0, wincou = 0;
    char name[20];
    srand(time(NULL));
    printf("Tossing a coin...\n");

    printf("Who are you?\n");
    scanf("%s", name);
    printf("Hello, %s", name);

    for (i = 0; i < N; i++)
    {
        num = rand();
        coin = CoinToss(num % 2);
        printf("Round %d", i + 1);
        if (coin == 'H')
        {
            wincou++;
            printf("Heads\n");
        }
        else if (coin == 'T')
        {
            loscou++;
            printf("Tails\n");
        }
       
    }
    printf("Heads: %d, Tails: %d\n", wincou, loscou);
    return 0;
}
char CoinToss(int num)
{
    if (num == 0)
        return 'T';
    else
        return 'H';
}