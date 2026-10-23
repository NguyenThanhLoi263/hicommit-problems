#include <stdio.h>

int main() {
  float a;
  scanf("%f", &a);
  if(a>=9.0 && a<=10)
  {
    printf("A");
  }
  else if(a>=8.0 && a<=8.9)
  {
    printf("B+");
  }
  else if(a>=7.0 && a<=7.9)
  {
    printf("B");
  }
  else if(a>=6.5 && a<=6.9)
  {
    printf("C+");
  }
  else if(a>=5.5 && a<=6.4)
  {
    printf("C");
  }
  else if(a>=5.0 && a<=5.4)
  {
    printf("D+");
  }
  else if(a>=4.0 && a<=4.9)
  {
    printf("D");
  }
  else if(a<4.0)
  {
    printf("F");
  }
  return 0;
}