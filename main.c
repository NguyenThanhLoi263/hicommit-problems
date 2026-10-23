#include <stdio.h>

int main() {
  float w;
  scanf("%f", &w);
  float h; 
  scanf("%f", &h);
  float BMI;
  BMI=w/((h/100)*(h/100));
  if(BMI<18.49)
  {
    printf("UNDERWEIGHT");
  }
  else if(BMI<=18.50 && BMI<=24.49)
  {
    printf("NORMAL");
  }
  else if(BMI<=25.0 && BMI<=29.99)
  {
    printf("OVERWEIGHT");
  }
  else if(BMI>=30)
  {
    printf("OBESE");
  }
  return 0;
}