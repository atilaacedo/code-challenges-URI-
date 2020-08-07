#include <stdio.h>
 
int main() {
 
    int c1;
    int n1;
    double v1;
    
    int c2;
    int n2;
    double v2;
    
    scanf("%d %d %lf", &c1, &n1, &v1);
    scanf("%d %d %lf", &c2, &n2, &v2);
    
    
    double total = (n1*v1) + (n2*v2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}
