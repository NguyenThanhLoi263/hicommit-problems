#include <stdio.h>

int main() {
  float w, h;
  scanf("%f%f", &w, &h); 
  float BMI;
  BMI=w/((h/100)*(h/100));
  if(BMI<=18.49999)
  {
    printf("UNDERWEIGHT");
  }
  else if(BMI>=18.500000 && BMI<=24.499999)
  {
    printf("NORMAL");
  }
  else if(BMI>=25.000000 && BMI<=29.999999)
  {
    printf("OVERWEIGHT");
  }
  else if(BMI>=30.000000)
  {
    printf("OBESE");
  }
  return 0;
}