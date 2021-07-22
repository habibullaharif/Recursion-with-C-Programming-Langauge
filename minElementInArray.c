#include <stdio.h>

int minElem(int [],int,int);

int main(void)
{
  int arr[8] = { 10, 26, 43, 34, 50, 60, 92, 72 };
  int size = 8;

  int ret = minElem(arr,size,arr[0]);

  printf("%d",ret);

  return 0;
}

int minElem(int arr[],int size,int min) {
  int index = size-1;
  if (index > 0) {
    return min;
  } else {
    min = (min < arr[index]) ? arr[index] : min;
    minElem(arr,size-1,min);
  }
}
