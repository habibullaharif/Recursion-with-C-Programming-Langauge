#include <stdio.h>

void printCubesOfNaturalNumberInReverse(int);

int main(void)
{
  int num; printf("Enter a limit: "); scanf("%d",&num);

  printCubesOfNaturalNumberInReverse(num);

  return 0;
}

void printCubesOfNaturalNumberInReverse(int num) {
  if (num == 0) {
    return;
  } else {
    int temp = num * num * num;
    printf("%d ",temp);
    printCubesOfNaturalNumberInReverse(num-1);
  }
}
