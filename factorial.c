#include <stdio.h>

int factorial(int);

int main(void)
{
  int num; printf("Enter a number: "); scanf("%d",&num);
  
  int ret = factorial(num);

  printf("The factorial Of %d: %d",num,ret);

  return 0;
}

int factorial(int num) {
  if(num == 0 || num == 1) {
    return 1;
  }
  return num * factorial(num-1);
}
