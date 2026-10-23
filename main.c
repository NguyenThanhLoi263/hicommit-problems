#include <stdio.h>

int main() {
  double w, h;
  scanf("%lf%lf", &w, &h); 
  float BMI;
  BMI=w/((h/100)*(h/100));
  if(BMI<=18.49999)
  {
    printf("UNDERWEIGHT");
  }
  else if(BMI>=18.500000 && BMI<=24.99999999999)
  {
    printf("NORMAL");
  }
  else if(BMI>=25.000000000 && BMI<30.00000000)
  {
    printf("OVERWEIGHT");
  }
  else if(BMI>=30.000000000)
  {
    printf("OBESE");
  }
  return 0;
}