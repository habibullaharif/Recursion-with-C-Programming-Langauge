#include <stdio.h>

int isPrime(int,int);

int main(void)
{
  int num; printf("Enter a number: "); scanf("%d",&num);

  int ret = isPrime(num,2);

  if (ret == 1) {
    printf("%d is prime number",num);
  } else {
    printf("%d is not prime number",num);
  }

  return 0;
}

int isPrime(int num, int i) {
  if (i < 2) {
    i = 2;
  }
  if (num == 1 || num == 0) {
    return 0;
  }
  int flag = 1;
  if (num % i == 0 && i < num) {
    flag = 0;
    return flag;
  } else {
    if (i < num) {
      isPrime(num, i+1);
    } else {
      return flag;
    }
  }
}
