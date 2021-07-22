#include <stdio.h>

int numberOfDigit(int,int);

int main(void)
{
  int num; printf("Enter a number: "); scanf("%d",&num);

  int ret = numberOfDigit(num,0);

  printf("The digit of enterd number is: %d",ret);

  return 0;
}

int numberOfDigit(int num,int count) {
  if (num == 0) {
    return count;
  } else {
    numberOfDigit(num/10,count+1);
  }
}
