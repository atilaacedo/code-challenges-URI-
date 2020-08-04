#include <stdio.h>

int main (void){
  int a;
  int b;

  scanf("%d", &a);  
  scanf("%d", &b);  

  long x = a + b;

  printf("X = %ld\n", x);

  return 0;
}
