#include <stdio.h>

int main() {
  float dtb, drl;
  scanf("%f%f", &dtb, &drl);
  int hl;
  if (dtb >= 9.0) {
    hl = 3;
  } 
  else if (dtb >= 8.0 && dtb<9.0) {
    hl = 2;
    } 
  else if (dtb >= 7.0 && dtb<=8) {
    hl = 1;
    } 
  else {
    hl = 0;
    }
  int rl;
  if (drl >= 90.0) {
    rl = 3;
    } 
  else if (drl >= 80.0 && drl<90.0) {
    rl = 2;
    } 
  else if (drl >= 70.0 && drl<80) {
    rl = 1;
    }
  else {
    rl = 0;
    }
  return 0;
}