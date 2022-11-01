#include <stdio.h>

void main() {
  float d = 54.5f, *px;
  printf("isi d mula-mula = %g\n", d);
  float *pd = &d;
  *pd += 10;
  printf("isi d sekarang = %g\n", d);
}