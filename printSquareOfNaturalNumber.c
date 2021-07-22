#include <stdio.h>

void printSquaresOfNaturalNumber(int,int);

int main(void)
{
  int num; printf("Enter a limit: "); scanf("%d",&num);
  
  printSquaresOfNaturalNumber(1,num);

  return 0;
}

void printSquaresOfNaturalNumber(int i,int num) {
  if (i == num+1) {
    return;
  } else {
    int temp = i * i;
    printf("%d ",temp);
    printSquaresOfNaturalNumber(i+1,num);
  }
}
