#include <stdio.h>

int main()
{
    int small, big, goal;

    printf("Enter the number of small bricks:\n");
    scanf("%d", &small);

    printf("Enter the number of big bricks:\n");
    scanf("%d", &big);

    printf("Enter the goal in inches:\n");
    scanf("%d", &goal);

    int req = goal / 5;

    if (req <= big)
    {
        int rem = goal - req * 5;
        if (rem <= small)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    else
    {
        int rem = goal - big * 5;
        if (rem <= small)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }

    return 0;
}