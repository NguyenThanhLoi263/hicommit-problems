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
  else if(a>=7.00 && a<=7.99)
  {
    printf("B");
  }
  else if(a>=6.50 && a<=6.90)
  {
    printf("C+");
  }
  else if(a>=5.50 && a<=6.40)
  {
    printf("C");
  }
  else if(a>=5.00 && a<=5.40)
  {
    printf("D+");
  }
  else if(a>=4.0- && a<=4.99)
  {
    printf("D");
  }
  else if(a<4.00)
  {
    printf("F");
  }
  return 0;
}