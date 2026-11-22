#include <stdio.h>


int factorial(int n){

    if (n <=1 ){
        return 1;
    }
    else{

        return n * factorial(n -1); 

    }

}



int main(){
        int a = 5;
      //int res =   factorial(a);
        printf("the facorial is od %d is %d  \n" , a, factorial(a)  );




    return 0;
}