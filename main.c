#include <stdio.h>

int main() {
  float w;
  scanf("%f", &w);
  float h; 
  scanf("%f", &h);
  float BMI;
  BMI=w/(h/100)*2;
  if(BMI<18.5)
  {
    printf("UNDERWEIGHT");
  }
  else if(18.5≤BMI && BMI<25)
  {
    printf("NORMAL");
  }
  else if(25≤BMI && BMI<30)
  {
    printf("OVERWEIGHT");
  }
  else if(BMI ≥ 30)
  {
    printf("OBESE");
  }
  return 0;
}