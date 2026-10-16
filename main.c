#include <stdio.h>

int main() {
  int a;
  int b;
  int c;
  int max=0;
  scanf("%d%d%d", &a, &b, &c);
  if(a<b && b>c)
  {
    max=b;
  }
  else if(a>c)
  {
    max=a;
  }
  else
  {
    max=c;
  }
  printf("%d", max);
  return 0;
}