#include <stdio.h>

void printNaturalNumberInReverse(int);

int sumOfNaturalNumber(int);

int main(void)
{
  int num; printf("Enter a limit: "); scanf("%d",&num);

  printf("The natural number is: ");
  printNaturalNumberInReverse(num);

  int ret = sumOfNaturalNumber(num);
  printf("the sum of NaturalNumber: %d",ret);

  return 0;
}

void printNaturalNumberInReverse(int num) {
  if (num == 0) {
    printf("\n");
    return;
  }
  printf("%d ",num);
  printNaturalNumberInReverse(num-1);
}

int sumOfNaturalNumber(int num) {
  if (num == 0) {
    return 0;
  }
  return num + sumOfNaturalNumber(num-1);
}
