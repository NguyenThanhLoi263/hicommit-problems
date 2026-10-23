#include <stdio.h>

int main() {
  double w, h;
  scanf("%lf%lf", &w, &h); 
  double BMI;
  BMI=w/((h/100)*(h/100));
  if(BMI<=18.49999)
  {
    printf("UNDERWEIGHT");
  }
  else if(BMI>=18.500000 && BMI<25.0000)
  {
    printf("NORMAL");
  }
  else if(BMI>=25.0000000 && BMI<30.00000000)
  {
    printf("OVERWEIGHT");
  }
  else if(BMI>=30.000000)
  {
    printf("OBESE");
  }
  return 0;
}