#include <stdio.h>
int main() {
  int n;
  printf("nhap so: ");
  scanf("%d", &n);
  if(n==0)
    printf("CHAN");
  else if(n%2==0)
  {
    printf("CHAN");
  }  
  else
  {
    printf("LE");
  }
  
  return 0;
}