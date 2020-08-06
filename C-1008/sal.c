#include <stdio.h>
 
int main() {
 
    int num;
    int hr;
    double valh;
    
    scanf("%d", &num);
    scanf("%d", &hr);
    scanf("%lf", &valh);
    
    double sal = hr*valh; 
    
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", sal);
 
    return 0;
}
