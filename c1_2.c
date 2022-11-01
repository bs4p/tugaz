#include <stdio.h>

void main() {
  int y, x = 87;
  int *px;
  px = &x;
  y = *px;
  printf("alamat x = %p\n", &x);
  printf("isi px = %p\n", px); 
  printf("isi x = %d\n", x); 
  printf("nilai yg ditunjuk oleh px = %d\n", *px);
  printf("nilai y = %d\n", y);
}