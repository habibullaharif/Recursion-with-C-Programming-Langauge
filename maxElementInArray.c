#include <stdio.h>

int maxElem(int [],int,int);

int main(void)
{
  int arr[8] = { 10, 26, 43, 34, 50, 60, 92, 72 };
  int size = 8;

  int ret = maxElem(arr,size,arr[0]);

  printf("%d",ret);

  return 0;
}

int maxElem(int arr[],int size,int max) {
  int index = size-1;
  if (index < 0) {
    return max;
  } else {
    max = (max < arr[index]) ? arr[index] : max;
    maxElem(arr,size-1,max);
  }
}
