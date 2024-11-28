#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
setlocale(LC_ALL,"");
	
	printf("===============================================");
    printf("\n             Soma dos Dígitos                \n");
    printf("===============================================\n");
    
    int n1,soma,again;
    
    do{
	soma=0;
    printf("\n\n Digite uma sequencia de números e veja a soma: ");
    scanf("%d",&n1);
    
    if( n1 < 0){
    	printf("\nDigite um número maior ou igual à 1!");
    }
    while(n1>0){
	
    soma+=n1%10;
    n1/=10;
    }
    printf("\n%d\n\n",soma);
	system("pause");
		 printf("\nGostaria de continuar?\n (1) sim \n (2) não\n");
	     scanf("%d",&again);
		 if(again==1){
			system("cls");
        }} while(again==1);
   }