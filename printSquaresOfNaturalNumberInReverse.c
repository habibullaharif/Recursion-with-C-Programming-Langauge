#include <stdio.h>

void printSquaresOfNaturalNumberInReverse(int);

int main(void)
{
  int num; printf("Enter a limit: "); scanf("%d",&num);

  printSquaresOfNaturalNumberInReverse(num);

  return 0;
}

void printSquaresOfNaturalNumberInReverse(int num) {
  if (num == 0) {
    return;
  } else {
    int temp = num*num;
    printf("%d ",temp);
    printSquaresOfNaturalNumberInReverse(num-1);
  }
}
