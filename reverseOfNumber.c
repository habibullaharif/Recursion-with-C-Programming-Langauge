#include <stdio.h>
#include <math.h>

int reverseOfNum(int, int);

int main(void)
{
  int num; printf("Enter a number: "); scanf("%d",&num);
  int lengthOfNum = 0;

  for (int i = num; i != 0; i /= 10) {
    lengthOfNum++;
  }

  int ret = reverseOfNum(num, lengthOfNum);

  printf("%d",ret);

  return 0;
}

int reverseOfNum(int num, int len) {
  if (len == 1) {
    return num;
  }
  return (num % 10)*pow(10, len-1) + reverseOfNum(num/10,len - 1);
}
