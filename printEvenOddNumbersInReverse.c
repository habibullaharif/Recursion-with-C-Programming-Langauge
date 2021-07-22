#include <stdio.h>

void pribtNaturalNumbersInReverse(int);

int main(void)
{
  int num; printf("Enter a limit: "); scanf("%d",&num);
  int temp;

  temp =  num-1;
  if (temp % 2 == 0) {
    temp--;
  }
  printf("The odd number: \n");
  pribtNaturalNumbersInReverse(temp);

  temp =  num-1;
  if (temp % 2 == 1) {
    temp--;
  }
  printf("The even number: \n");
  pribtNaturalNumbersInReverse(temp);

  return 0;
}

void pribtNaturalNumbersInReverse(int num) {
  if (num == 0 || num == -1) {
    printf("\n");
    return;
  } else {
    printf("%d ",num);
    pribtNaturalNumbersInReverse(num-2);
  }
}
