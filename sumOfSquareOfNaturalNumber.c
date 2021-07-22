#include <stdio.h>

int sumOfSquareOfNaturalNumber(int);

int main(void)
{
  int num; printf("Enter a limit: "); scanf("%d",&num);

  int ret = sumOfSquareOfNaturalNumber(num);

  printf("%d",ret);

  return 0;
}

int sumOfSquareOfNaturalNumber(int num) {
  if (num == 1) {
    return 1;
  }
  return num*num + sumOfSquareOfNaturalNumber(num-1);
}
