#include <stdio.h>
#include <assert.h>


int mode(int [], int);

int main(void) {
  int x[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(x, 12) == 4));

  int y[] = {5};
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");
  }
int mode(int arr[], int len){
  int ar2[len];
  int n,p, max;
  int cnt = 0;
  for(int i = 0; i< len; i++){
  n = arr[i];
  for(int j=0; j<len; j++){
  if( arr[j] == n)
  cnt = cnt +1;
  }
  ar2[i] = cnt;
  cnt = 0;
  }
  max = ar2[0];
  for(int h = 0; h< len; h++){
  if(ar2[h]> max){
  max = ar2[h];
  }
  }
  for(p =0; p<len; p++){
  if(max == ar2[p])
  break;
  }
  return arr[p];
  }
