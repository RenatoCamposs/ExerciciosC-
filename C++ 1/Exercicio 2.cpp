/*2ºprograma*/
#include"stdio.h"
#include<conio.h>
main(void){
           int A[3][3];
           int B[3][3];
           int C=0;
           int i,j;
           for(i=0;i<=2;i++){
                                        for(j=0;j<=2;j++){
           printf("Entre com o valor da posicao A[%d][%d] :: ",i+1,j+1);
           scanf("%d",&A[i][j]);
           }  
           }
           printf("\n\n");
           for(i=0;i<=2;i++){
                                        for(j=0;j<=2;j++){ 
           printf(" Entre com o valor da posicao B[%d][%d] :: ",i+1,j+1);
           scanf("%d",&B[i][j]);
           }
           }
                      C=B[i][j]-A[i][j];
           printf("\n\n A diferenca entre Coluna e Linha e ::  [%d]",C);
           getch();
           }
