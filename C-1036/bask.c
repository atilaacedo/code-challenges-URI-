#include <stdio.h>
#include <math.h>

int main(){


  double a, b, c, d;

  scanf("%lf %lf %lf", &a, &b, &c);
  d = pow(b,2) - 4*a*c;

  if(2*a == 0 || d <0){
      printf("Impossivel calcular\n");
  }else{

  double  d1 = sqrt(d);

  double x1 = (-1*b + d1 + 0.0)/ (2.0*a);
  double x2 = (-1*b - d1 + 0.0)/ (2.0*a);

  printf("R1 = %.5lf\n", x1);
  printf("R2 = %.5lf\n", x2);
  
 }

  return 0;
}
