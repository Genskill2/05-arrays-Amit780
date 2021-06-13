#include <stdio.h>
#include <assert.h>


int max(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
int max(int arr[], int len){
  int max;
  max = arr[0];
  for(int j=0; j<len; j++){
  if(arr[j]>max){
  max = arr[j];}
  }
  return max;
  }
