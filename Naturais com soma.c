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
	printf("\n\nDigite seu n�mero  inteiro natural e veja a soma at� ele:  ");
	scanf("%d",&n);
	if(n<0){
		printf("\nN�mero inv�lido! Digite um n�mero inteiro n�o negativo.\n");
			continue;
    }   for (i=1;i<=n;i++) {
            soma+=i;
    }   printf("\nA soma dos naturais at� %d �: %d \n",n,soma);
	system("pause");
    getchar();
	printf("\n\nGostaria de continuar?\n (1) sim \n (2) n�o\n");
	scanf("%d",&again);
	if(again==1){
			system("cls");
	}}  while(again==1);
	
}
