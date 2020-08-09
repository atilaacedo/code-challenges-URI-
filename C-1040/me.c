#include <stdio.h>
 
int main() {
 
    double n1, n2, n3, n4;
    
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    
    double media = ((n1*2) + (n2*3) + (n3*4) + (n4*1)) / 10;
    
    if(media >= 7.0 ){
      printf("Media: %.1lf\n", media);
        printf("Aluno aprovado.\n");
    }else if(media < 5.0){
       printf("Media: %.1lf\n", media);
        printf("Aluno reprovado.\n");
    }else{
      printf("Media: %.1lf\n", media);
        printf("Aluno em exame.\n");
        double nex;
        scanf("%lf", &nex);
        
        printf("Nota do exame: %.1lf\n", nex);
        double mf = (media + nex)/2.00;
        
        if(mf>=5.0){
            printf("Aluno aprovado.\n");
             printf("Media final:%.1lf\n", mf);
        }else{
            printf("Aluno reprovado.\n");
             printf("Media final:%.1lf\n", mf);
        }
    }
 
    return 0;
}
