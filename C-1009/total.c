#include <stdio.h>
 
int main() {
 
   char nome[20];
   double salario;
   double vendas;
   
   scanf("%s", nome);
   scanf("%lf", &salario);
   scanf("%lf", &vendas);
   
   double total =  salario + 0.15*vendas;
   
   printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}
