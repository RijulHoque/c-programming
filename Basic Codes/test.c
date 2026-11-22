#include <stdio.h>

int main()
{
  int table[10], n;
  printf("enter a number  :");
  scanf("%d", n);
  for (int i = 1; i < 10; i++)
  {


    table[i]= n * i;
    printf("5 x %d = %d\n" , i, table[i]);


  }

  return 0;
}