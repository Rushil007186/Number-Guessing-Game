#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("Start your guess!\n");
    int un, i;
    for (int i = 1;; i++)
    {
        scanf("%d", &un);
        if (un == num)
        {
            printf("Well Done! You have guessed the number in %d tries\n", i);
            break;
        }
        else if (un > num)
            printf("Lower number please\n");
        else
            printf("Higher number please\n");
    }
    return 0;
}
