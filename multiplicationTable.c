#include <stdio.h>

void multiplicationTable(int,int,int);

int main(void)
{
  int num; printf("Enter a number: ");  scanf("%d",&num);
  int limit; printf("Enter a limit: ");  scanf("%d",&limit);

  multiplicationTable(1, num, limit);

  return 0;
}

void multiplicationTable(int i, int num, int limit) {
  if (i <= 0) {
    i = 1;
  }
  if (i > limit) {
    return;
  } else {
    int temp = i * num;
    printf("%d x %d = %d\n",i,num,temp);
    multiplicationTable(i+1,num,limit);
  }
}
