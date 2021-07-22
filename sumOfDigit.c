#include <stdio.h>

int sumOfDigit(int);

int main(void)
{
  int num; printf("Enter a number: "); scanf("%d",&num);

  int ret = sumOfDigit(num);

  printf("sum of Digit of number %d: %d",num,ret);

  return 0;
}

int sumOfDigit(int num) {
  if (num == 0) {
    return 0;
  }
  return num % 10 + sumOfDigit(num/10);
}
