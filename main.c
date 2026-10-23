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
  if (hl == 3 && rl == 3) {
    printf("HOC_BONG_XUAT_SAC");
    }
  else if ((hl == 2 && (rl == 2 || rl == 3)) || (hl == 3 && rl == 2)) {
    printf("HOC_BONG_GIOI");
    }
  else if ((hl == 1 && (rl == 1 || rl == 2 || rl == 3)) ||
    (hl == 2 && rl == 1) ||
    (hl == 3 && rl == 1)) {
    printf("HOC_BONG_KHA");
    }
  else {
    printf("KHONG_DAT");
    }
  return 0;
}