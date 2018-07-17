#include<stdio.h>
#include<conio.h>
main(void)
{
          int A[3][3];
          int l,c,soma;
          soma=0;
          for(l=0;l<=2;l++){
                             for(c=0;c<=2;c++){
                                               printf("Entre com o valor da matriz :: [%d] [%d] \n\n",l,c);
                                               scanf("%d",&A[l][c]);
                                               if(A[l][c]%2==0){
                                                                printf("\n\n PAR!\n");
                                                          soma=soma+A[l][c];
                                                          }else{
                                                               printf("\n\n IMPAR!\n");
                                                                 }
                                              }
                             } 
          printf("\n\n MATRIZ \n\n");
           for(l=0;l<=2;l++){
                            for(c=0;c<=2;c++){
                                              if(c==2){
                                                       printf(" [%d] \n", A[l][c]);
                                                       }else{
                                                            printf(" [%d]", A[l][c]);
                                                            }
                                                            }
                                                            }
                            printf("\n\n A soma dos elementos pares e:: %d",soma);
                            getch();
                            }
                            
