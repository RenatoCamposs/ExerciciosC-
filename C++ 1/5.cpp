#include <stdio.h>
#include <conio.h>
main (void) {
     int A[10][10];
     int i,r,soma=0;
     for(i=1;i<=10;i++){
                         for(r=1;r<=10;r++){
                                             printf("Entre com o valor da matriz :: [%d] [%d] \n\n",i,r);
                                             scanf("%d",&A[i][r]);                      
                                             }
                                             {
                                                                                        soma=soma+A[i][r];
                                                                                        }
}
 printf("\n\n MATRIZ \n\n");
           for(i=1;i<=10;i++){
                            for(r=1;r<=10;r++){
                                              if(r==9){
                                                       printf(" [%d] \n", A[i][r]);
                                                       }else{
                                                            printf(" [%d]", A[i][r]);
                                                            }
                                                            }
                                                            }
                            printf("\n\n A soma dos elementos :: %d",soma);
                            getch();
                            }
                                         
