/*21ºprograma*/
#include "stdio.h"
#include <windows.h>
#include <conio.h>
 int main(void){
int v; 
int resp=1;
 while(resp == 1){
 system("cls");
 system("color 4F");
 printf("Entre com a numero correspondente a seu sexo (1-F/2-M) :: ");
 scanf("%d",&v);
 fflush(stdin);
 Beep(650,300);
 system("color 9F");
 if (v == 1){
 printf("\n\nFEMININO!");
}else if (v == 2){ 
 printf("\n\nMASCULINO!");
 } else {
 printf("\n\nVALOR DESCONHECIDO");
 }
 printf("\n\n\nDeseja executar novamente a instrucao ? (1-SIM/2-NAO) :: ");
 scanf("%d",&resp);
 }
 
getch();
 }
