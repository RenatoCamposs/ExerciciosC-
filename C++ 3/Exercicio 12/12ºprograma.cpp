/*12ºprograma*/
#include"stdio.h"
#include<conio.h>
#include<string.h>
#include<windows.h>
main(void){
char A[25][35],troca[3];
int i,j,B[25],trocanum;;
for(i=1;i<=25;i++){
 system("cls");
 printf("\n\n Nome do %d candidato:: ",i);
 fflush(stdin); 
 fgets(A[i], 35, stdin); 
 printf("\n Idade do %d candidato:: ",i);
 scanf("%d",&B[i]);
 }
 for(i=1;i<=2;i++){
 for(j=i+1;j<=25;j++){
 if(strcmp(A[i],A[j])>0){ 
 strcpy(troca,A[i]); 
strcpy(A[i],A[j]);
strcpy(A[j],troca);
trocanum=B[i]; 
B[i]=B[j];
B[j]=trocanum;
 }
 } 
 }
system("cls");
system("color 1F");
printf(" :: VALORES Em ORDEM CRESC. :: ");
for(i=1;i<=25;i++){
printf("\n\n\n Nome do %d candidato:: %s ",i,A[i]);
printf("\n Idade do %d candidato:: %d ",i,B[i]);
} 
getch();
}
