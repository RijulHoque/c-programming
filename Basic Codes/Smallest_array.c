#include <stdio.h>

int main()
{
        int smallest;
        int num[10] = {1, 2, 999, 19, 67, 22, 45, -5};

         smallest = num[0];
        for (int i = 0; i <= 9; i++)
        {
               
                if (smallest > num[i]){
                        smallest = num[i];
                }
        }
        printf("the smallet is %d ", smallest);








        return 0;
}