#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
setlocale(LC_ALL,"");
	
	printf("===============================================");
    printf("\n              Fibonacci     Mx:46            \n");
    printf("===============================================\n");
    int again=1;
    do{
    	
	unsigned long long a=1;
    int n1,i,b=0,c=0;
    
    printf("Digite quantos termos da sequencia de Fibonacci você quer ver: ");
    scanf("%d",&n1);
    if( n1 < 0){
    	printf("\nDigite um número maior ou igual à 1");
    	
	}
	for(i=0;i<n1;i++){
	   printf("\n%llu\n",a);
	   b=a;
	   a=b+c;
	   c=b;
	}
		system("pause");
		 printf("\nGostaria de continuar?\n (1) sim \n (2) não\n");
	     scanf("%d",&again);
		 if(again==1){
			system("cls");
        }} while(again==1);
	}