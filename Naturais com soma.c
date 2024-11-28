#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int i,again,soma,n;
	printf("===============================================");
    printf("\n              Soma dos Naturais            \n");
    printf("===============================================");
	do{
		soma=0;
	printf("\n\nDigite seu número  inteiro natural e veja a soma até ele:  ");
	scanf("%d",&n);
	if(n<0){
		printf("\nNúmero inválido! Digite um número inteiro não negativo.\n");
			continue;
    }   for (i=1;i<=n;i++) {
            soma+=i;
    }   printf("\nA soma dos naturais até %d é: %d \n",n,soma);
	system("pause");
    getchar();
	printf("\n\nGostaria de continuar?\n (1) sim \n (2) não\n");
	scanf("%d",&again);
	if(again==1){
			system("cls");
	}}  while(again==1);
	
}
