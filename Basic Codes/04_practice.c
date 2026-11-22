
#include <stdio.h>

int main()
{
    int number[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &number[i]);
    }

    int largest = number[0];
    int second = number[0];

    // Find the largest
    for (int j = 1; j < 5; j++)
    {
        if (number[j] > largest)
        {
            largest = number[j];
        }
    }

    // Find the second largest
    int found = 0;

    for (int k = 0; k < 5; k++)
    {
        if (number[k] < largest)
        {
            if (found == 0 || number[k] > second)
            {
                second = number[k];
                found = 1;
            }
        }
    }

    if (found)
        printf("Second largest number is %d\n", second);
    else
        printf("No distinct second largest number exists.\n");

    return 0;
}
