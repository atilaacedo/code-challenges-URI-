#include <stdio.h>

int main() {
 
     int n, cem, cinquenta, vinte, dez, cinco, dois;
   
    scanf("%d", &n);
   int  va = n;
  
   
   cem = va/100;
   va = va%100;
  cinquenta = va/50;
   va = va%50;
   vinte = va/20;
   va = va%20;
   dez = va/10;
   va = va%10;
   cinco = va/5;
   va = va%5;
   dois = va/2;
   va =va%2;
  
  printf("%d\n", n);
   printf("%d nota(s) de R$ 100,00\n", cem);
   printf("%d nota(s) de R$ 50,00\n", cinquenta);
   printf("%d nota(s) de R$ 20,00\n", vinte);
   printf("%d nota(s) de R$ 10,00\n", dez);
   printf("%d nota(s) de R$ 5,00\n", cinco);
   printf("%d nota(s) de R$ 2,00\n", dois);
   printf("%d nota(s) de R$ 1,00\n", va); 
    
    return 0;
}
