#include <stdio.h>
#include <assert.h>


int factors(int, int []);

int main(void) {
  int ret[100] = {0};
  int count = factors(180, ret);
  assert (count == 5);
  assert (ret[0] == 2);
  assert (ret[1] == 2);
  assert (ret[2] == 3);
  assert (ret[3] == 3);
  assert (ret[4] == 5);


  count = factors(143, ret);
  assert (count == 2);
  assert (ret[0] == 11);
  assert (ret[1] == 13);
  printf("Factors: passed\n");
}
int factors(int num, int arr[]){
int cpy = num;
int cnt = 0;
int cnt1 =0;
for(int i = 2; i<num/2; i++){
if(num%i ==0){
for(int j=2; j<=i; j++){
if(i%j==0)
cnt+= 1;
}
if(cnt ==1){
while(cpy%i ==0){
arr[cnt1] = i;
cpy/= i;
cnt1+= 1;
}
cpy = num;}

cnt = 0;
}
else
continue;}

return cnt1;
}
