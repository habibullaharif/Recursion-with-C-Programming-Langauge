#include <stdio.h>

int addNaturalNunmber(int);

int main(void)
{
  int num; printf("Enter a limit: "); scanf("%d",&num);
  int ret = addNaturalNunmber(num);

  printf("%d",ret);

  return 0;
}

int addNaturalNunmber(int n) {
  if (n == 0) {
    return 0;
  }
  return n + addNaturalNunmber(n-1);
}
