#include <stdio.h>

int linearSearch(int arr[], int size ,int key);

int main(void)
{
  int arr[8] = {4,1,6,5,3,7,8,0};
  int size = 8;

	int key;
  printf("Enter a number to search: "); scanf("%d",&key);

  int ret = linearSearch(arr,size ,key);
  if(ret == -1) {
    printf("%d is not found",key);
  } else {
    printf("%d is in inedx %d",key,ret);
  }

	return 0;
}

int linearSearch(int arr[], int size ,int key) {
  if(size == 0) {
    return -1;
  } else if(arr[size-1] == key){
    return size-1;
  } else {
    return linearSearch(arr, size-1, key);
  }
}
