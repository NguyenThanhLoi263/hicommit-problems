#include <stdio.h>

int main() {
  float w;
  scanf("%f", &w);
  float h; 
  scanf("%f", &h);
  float BMI;
  BMI=w/((h/100)*(h/100));
  if(BMI<=18.4999)
  {
    printf("UNDERWEIGHT");
  }
  else if(BMI>=18.50000 && BMI<=24.4999)
  {
    printf("NORMAL");
  }
  else if(BMI>=25.0000 && BMI<=29.9999)
  {
    printf("OVERWEIGHT");
  }
  else if(BMI>=30.00000)
  {
    printf("OBESE");
  }
  return 0;
}