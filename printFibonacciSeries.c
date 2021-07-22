#include <stdio.h>

int fibonacci(int);

int main(void)
{
  int num; printf("Enter a limit: "); scanf("%d",&num);
  int ret;

  for(int i = 0; i < num; i++) {
    ret = fibonacci(i+1);
    printf("%d ",ret);
  }

  return 0;
}

int fibonacci(int n) {
  if (n == 0 || n == 1) {
    return n;
  }
  return fibonacci(n-2) + fibonacci(n-1);
}
