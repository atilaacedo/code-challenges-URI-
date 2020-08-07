#include <stdio.h>
 
int main() {
 
    double r;
    
    scanf("%lf", &r);
    
    double pi = 3.14159;
    
    double volume = (4.0/3)*pi*r*r*r;
    
    printf("VOLUME = %.3lf\n", volume);
 
    return 0;
}
