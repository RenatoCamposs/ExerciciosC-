/*6ºprograma*/
#include"stdio.h"
#include<conio.h>
main(void){
int i,A[5],B[5],C[5];
for(i=1; i<=5;i++){
 printf("\n\n Entre com o valor da matriz A::",i);
 scanf("%d",&A[i]);
 printf("\n\n Entre com o valor da matriz B::",B[5]);
 scanf("%d",&B[i]);
 C[i]=A[i]+B[i];
 }
 for(i=1; i<=5;i++){
printf("\n O valor da soma das matrizes em uma matriz C e :: %d = %d + %d",C[i],A[i],B[i]);
 }
 getch();
}
