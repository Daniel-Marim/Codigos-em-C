#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	printf("===============================================");
    printf("\n               Tabuada 1-10!                   \n");
    printf("===============================================");
	int n,i,again;
	do{
	printf("\nDigite o número para ver sua tabuada de 1 a 10: ");
		scanf("%d",&n);
	if(n<0){
	    printf("\n Digite um número positivo !!");
			continue;
	}
	for (i=1;i<=10;i++){
		printf("\n %d X %d = %d\n",n,i,n*i);
	}
	system("pause");
    printf("\nGostaria de continuar?\n (1) sim \n (2) não\n");
	scanf("%d",&again);
    if(again==1){
			system("cls");
    }} while(again==1);
	}
