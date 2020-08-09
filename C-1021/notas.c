#include <stdio.h>
#include <math.h> 
int main() {
   int cem, cinquenta, vinte, dez, cinco, dois, um, cc, vinc, dezc, ccc, uc;    
   int n1;  
   int moedas;
   int c1, v1, d1, cc1,u1;
   int de1;


   double n;
   scanf("%lf", &n);

   n1 = (int) n;
   n -= n1;

   moedas = (n*100);

   cem = n1/100;
   cinquenta = n1%100;
   c1 = cinquenta/50;
   vinte = cinquenta%50;
   v1 = vinte/20;
   dez = vinte%20;
   de1 = dez/10;
   cinco = dez%10;
   cc1 = cinco/5;
   dois = cinco%5;
   d1 = dois/2;


   //Moedas (1 real)

   um = dois%2;
   u1 = um/1;

  cc = moedas /50;
  vinc = (moedas %50)/25;
  dezc = (((moedas %50)%25)/10);
  ccc = ((((moedas %50)%25)%10)/5);
  uc = ((((moedas %50)%25)%10)%5)/1;


   printf("NOTAS:\n");
   printf("%d nota(s) de R$ 100.00\n",cem);
   printf("%d nota(s) de R$ 50.00\n",c1);
   printf("%d nota(s) de R$ 20.00\n",v1);
   printf("%d nota(s) de R$ 10.00\n",de1);
   printf("%d nota(s) de R$ 5.00\n",cc1);
   printf("%d nota(s) de R$ 2.00\n",d1);
   printf("MOEDAS:\n");
   printf("%d moeda(s) de R$ 1.00\n", u1);
   printf("%d moeda(s) de R$ 0.50\n", cc);  
   printf("%d moeda(s) de R$ 0.25\n", vinc);
   printf("%d moeda(s) de R$ 0.10\n", dezc);
   printf("%d moeda(s) de R$ 0.05\n", ccc);
   printf("%d moeda(s) de R$ 0.01\n", uc);



   


    return 0;
}
