#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    int i = 1;
printf("enter a number :");
    scanf("%d", &n);
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    
    printf("%d", sum);

    return 0;
}
