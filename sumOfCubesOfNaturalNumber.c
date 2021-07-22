#include <stdio.h>

int sumOfQubeOfNaturalNumber(int);

int main(void)
{
  int num; printf("Enter a limit: "); scanf("%d",&num);

  int ret = sumOfQubeOfNaturalNumber(num);

  printf("%d",ret);

  return 0;
}

int sumOfQubeOfNaturalNumber(int num) {
  if (num == 1) {
    return 1;
  }
  return num*num*num + sumOfQubeOfNaturalNumber(num-1);
}
