#include "stdio.h"
#include <conio.h>
main (void) {
     int A[5][10], SOMAIM, SOMAP, MEDIAI,MEDIAP, TOTAL=0;
     int b,c;
     for(b=1;b<=5;b++){
         for(c=1;c<=10;c++){
                           printf("\n Entre com os valores da matriz [%d][%d]",A[b][c]);
                           scanf("%d",&A[b][c]);
                            if(A[c][b]%2==0){
                            printf("\n PAR!\n");
                            }else{
                                  printf("\n\n Impar!");
                                  }
                        } 
                        }                  
                    printf("\n\n MATRIZ \n\n");
           for(b=1;b<=5;b++){
                            for(c=1;c<=5;c++){
                                              if(c==4){
                                                       printf("[%d] \n", A[b][c]);
                                                       }else{
                                                            printf(" [%d][%d]",A[b][c]);
                                                            }
                                                            }
                                                            }
                            printf("\n\n A soma dos elementos pares e:: %d",TOTAL);
                            getch();
                            }
