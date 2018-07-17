#include <stdio.h>
#include <conio.h>
main (void){
     float A[20],SOMA,MEDIA;
     int i;
     for (i=1;i<=20;i++){
         printf("Entre com o %d valor de A::",i);
         scanf("%f",&A[i]);
         SOMA=A[i]+SOMA;
         MEDIA=SOMA/20;
         }
         printf("\nA SOMA dos valores e :: %f",SOMA);
         printf("\nA MEDIA dos valores e :: %f",MEDIA);
         getch();
         }
