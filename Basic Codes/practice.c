#include <stdio.h>

int main() {
    // Write your code here
    int number = 12;
    int postfixResult = number++;
    int prefixResult  = ++number;
    printf("Number: 12");
    printf("Prefix Result: %d\n" , prefixResult);
    printf("Postfix Result: %d\n" , postfixResult);
   


    return 0;
}