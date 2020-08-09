#include <stdio.h>
 
int main() {
   int c;
   int q;
   double p;
   
   scanf("%d", &c);
   scanf("%d", &q);
   
   
   
   if(c == 1){
       p = q*4.00;
   }else if(c == 2){
       p = q*4.50;
   }else if(c == 3){
      p = q*5.00;
   }else if(c == 4){
       p =q*2.00;
   }else if(c == 5){
       p = q*1.50;
   }
   
   printf("Total: R$ %.2lf\n", p);
 
    return 0;
}
