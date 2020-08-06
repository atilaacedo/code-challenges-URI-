#include <stdio.h>

int main(){
  
    double A; 
    double B;
    double C;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
 
    printf("MEDIA = %.1lf\n", ((A*2 + B*3 + C*5)/ (2 + 3 +5)));
    
    return 0;

}
