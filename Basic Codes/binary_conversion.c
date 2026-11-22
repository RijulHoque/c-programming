#include <stdio.h>

int main(){
    int n;
  int  arr[1000];

    printf("enter a nuber :");
    scanf("%d" , &n);
    for (int i = 1 ; i <= n; i++){

         arr[i] = n / i ;
         printf("%d\n" , arr[5]);
    }


    return 0;
}