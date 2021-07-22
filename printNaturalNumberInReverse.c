#include <stdio.h>

void printNaturalNumberInReverse(int);

int main(void)
{
  int num; printf("Enter a limit: "); scanf("%d",&num);

  printf("The natural number is: \n");
  printNaturalNumberInReverse(num);

  return 0;
}

void printNaturalNumberInReverse(int num) {
  if (num == 0) {
    return;
  }
  printf("%d ",num);
  printNaturalNumberInReverse(num-1);
}
