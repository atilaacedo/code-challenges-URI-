#include <stdio.h>
 
int main() {
 
  int a, b, c;
  
  scanf("%d %d %d", &a, &b, &c);
 
  int maiorAB = (a+b+abs(a-b))/2;
  int maior = (c+maiorAB+abs(c-maiorAB))/2;
  printf("%d eh o maior\n", maior);
 
    return 0;
}
