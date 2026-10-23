#include <stdio.h>

int main() {
  float a;
  sanf("%f", &a);
  if(a>=9.0 && a<=10)
  {
    printf("A");
  }
  else if(a>=8.0 && a<=8.9)
  {
    printf("B+");
  }
  return 0;
}