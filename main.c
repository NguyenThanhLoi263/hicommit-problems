#include <stdio.h>

int main() {
  int k;
  scanf("%d", &k);
  long long tong=0;
  if(k<50)
  {
    tong=tong+50*1678;
    k-=50;
    
  }
  else{
    tong=tong+k*1678;
    k=0;
  }
  if (k>50) {
    tong+=50*1734;
    k-=50;
    } 
  else {
    tong+=k*1734;
    k=0
    }
  
  return 0;
}