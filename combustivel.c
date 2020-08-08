#include <stdio.h>
 
int main() {
 
    int horas;
    int velocidade;
    
    scanf("%d", &horas);
    scanf("%d", &velocidade);
    
    int distancia = horas*velocidade;
 
    double litros = distancia/12.0;
    
    printf("%.3lf\n", litros);
 
    return 0;
}
