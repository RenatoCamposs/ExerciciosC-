
/*3º programa*/
#include"stdio.h"
#include<conio.h>
main(void){
           int A[10],B[10];
           int i;
           for(i=1;i<=10;i++){
                              printf("\n\n Entre com %d valor ::",i);
                              scanf("%d",&A[i]);
                              }
                              for(i=1;i<=10;i++){
                                                 B[i]=A[i]*4;
                                                 printf("\n\n Os valores da matriz B multiplicados por 4 sao:: %d",B[i]);
                                                 }
                                                 getch();
                                                 }
