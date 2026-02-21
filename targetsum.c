#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    int a[size];

    // Reading array elements
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d value:\n", i + 1);
        scanf("%d", &a[i]);
    }

    // Removing duplicates (setting them to 0)
    for (int i = 0; i < size; i++)
    {
        if (a[i] != 0)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (a[i] == a[j])
                {
                    a[j] = 0;
                }
            }
        }
    }

    // Printing the result
    printf("\nArray after removing duplicates:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}