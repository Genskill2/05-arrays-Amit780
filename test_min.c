#include <stdio.h>
#include <assert.h>


int min(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (min(x, 7) == -3);

  int y[] = {5};
  assert (min(y, 1) == 5);
  printf("Min: passed\n");
  }
int min( int arr[], int len){
  int min;
  min = arr[0];
  for(int h=0; h<len; h++){
    if(arr[h]<min){
      min = arr[h];
    }
  }
  return min;
}
