/*19ºprograma*/
#include"stdio.h"
#include<conio.h>
main(void){
           float A[25],B=100,C;
           int i;
           for(i=1;i<=25;i++){
                              printf("\n\nEntre com o %d valor de A::",i);
                              scanf("%f",&A[i]);
                              if (A[i]<=100){
                                         C=100-A[i];
                                         printf("\n\tA diferenca entre 100 e o valor digitado e ::%f ",C);
                                         }
                              if (A[i]>100){
                                            C=A[i]-100;
                                            printf("\n\tA diferenca entre 100 e ::%f ",C);
                                            }
                              getch();
                              }
           getch();
           }
