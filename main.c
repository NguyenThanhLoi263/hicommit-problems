#include <stdio.h>

int main() {
  double d;
  double tien=0;
  scanf("%lf", &d);
  if(d<=1.0000f)
  {
    tien=d*15000;
  }
  else if(d>1.000f&&d<=5.000f)
  {
    tien= 1 × 15000 + (d − 1) * 13000;
  }
  return 0;
}