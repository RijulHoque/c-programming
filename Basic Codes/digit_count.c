#include <stdio.h>

int main()
{
    int num, count = 0, n;
    printf("enter a number  :");
    scanf("%d" , &num);
n = num;
    if (n == 0)
    {
       count = 1;
    }
    else{

        while (n !=0)
        {
            count++;
            n = n/10;
        }
        
    }
printf("the number of digits are :%d\n " , count );
    return 0;
}