#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
setlocale(LC_ALL,"");
    unsigned long long f; 
	int i,n,again;
	printf("===============================================");
    printf("\n               fatorial!                   \n");
    printf("===============================================");
    
    do{
    	 printf("\n\n Digite seu número e veja o fatorial dele: ");
    	 scanf("%d",&n);
    	 if(n<0){
    	 	printf("\nNúmero inválido! Tente novamente.\n");
			continue;
	  }  f=1;
		 if(n==0){
			printf("\n O fatorial de 0 é 1\n\n");
      } 
		 else{
		  for(i=1;i<=n;i++){
    	     	f*=i;	     	
	  }  printf("\nO fatorial de %d é: %llu\n\n",n,f);
      } 
	     
	     system("pause");
		 printf("\nGostaria de continuar?\n (1) sim \n (2) não\n");
	     scanf("%d",&again);
		 if(again==1){
			system("cls");
      }} while(again==1);
      }
