#include <stdio.h>
#define MAX 10
Int fibo[max]; pembentukan array
Void main(){
  Int i; Fibo[1] = 1;
  Fibo[2] = 1;
  For (i=3; i<= MAX; i++)
  Fibo [i] = fibo[i-2] + fibo [i-1];
  Printf(“%d Bilangan fibonasi pertama adalah : 
  \n”, MAX);
  For (i=1; i<=max; i++)
  Printf(“%d-“,fibo[i]);
}