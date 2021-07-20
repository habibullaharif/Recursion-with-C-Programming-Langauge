#include <stdio.h>

int factorial(int);

int main(void)
{
  int num; printf("Enter a number: "); scanf("%d",&num);
  int ret = factorial(num);

  printf("%d",ret);


  return 0;
}

int factorial(int a) {
  if(a == 0 || a == 1) {
    return 1;
  }
  return a * factorial(a-1);
}
