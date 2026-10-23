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
  else if(BMI>=25.0 && BMI<=29.0)
  {
    printf("OVERWEIGHT");
  }
  else if(BMI>=30.0)
  {
    printf("OBESE");
  }
  return 0;
}