#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
setlocale(LC_ALL,"");
	
	printf("===============================================");
    printf("\n        Ímpares em um intervalo            \n");
    printf("===============================================\n");
    
    int i,n1=0,n2=0,again=1,t;
    
    do{

    printf("\nDigite o número inicial: ");
    scanf("%d",&n1);
    t=0;
    if(n1<0){
    	 	printf("\nO número precisa ser maior ou igual a zero.\n");
			continue;
		}
        printf("\nDigite o número final do intervalo: ");
        scanf("%d",&n2);
        if(n2<n1){
    	 	printf("\nO número não pode ser menor que o inicial.\n");
			continue;
	    }
	    printf("\nOs números ímpares no intervalo de %d e %d são:",n1,n2);
		for(i=n1;i<=n2;i++){
			if(i%2!=0){
	    printf("\n\n%d",i);
	    t++;
	    }}
	    
	    printf("\n\n*** Total de %d ***\n\n",t);
			system("pause");
		 printf("\nGostaria de continuar?\n (1) sim \n (2) não\n");
	     scanf("%d",&again);
		 if(again==1){
			system("cls");
        }} while(again==1);
    
}