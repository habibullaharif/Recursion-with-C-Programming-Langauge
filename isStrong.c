#include <stdio.h>

int factorial(int);

int isStrong(int);

int main(void)
{
  int num; printf("Enter a number: "); scanf("%d",&num);

  int ret = isStrong(num);

  if(ret == num) {
    printf("%d is strong number",num);
  } else {
    printf("%d is not strong number",num);
  }

  return 0;
}

int factorial(int num) {
  if (num == 1 || num == 0) {
    return 1;
  } else {
    return num * factorial(num-1);
  }
}

int isStrong(int num) {
  if (num == 0) {
    return 0;
  } else {
    int digit = num % 10;
    return factorial(digit) + isStrong(num/10);
  }
}
