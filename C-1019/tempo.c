#include <stdio.h>
 
int main() {
 
  int n, h, min;
  scanf("%d", &n);
 
    h = n/3600;
    n = n%3600;
    min = n/60;
    n =n%60;
    
    printf("%d:%d:%d\n", h, min, n);
    
 
    return 0;
}
