#include<stdio.h>

int fatorial(unsigned int n){
	// A função aceita apenas números naturais
    if(n==1 || n==0)
        return 1;
    else
        return n*fatorial(n-1);
}

/*
	Como funcionará essa função?
	Primeiro, ela verificará se o número é
	0 ou 1. O fatorial de 0 e 1 = 1.
	Senão, ele retornará n vezes o fatorial
	de n-1.
	Obsreve:
	n=5. n! = 5*(fatorial(4)*(fatorial(3)*(fatorial(2)*(fatorial(1)))))
	Quando n-1=1, retornará 1 e encerrará esse ciclo.
*/

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    printf("%d\n",fatorial(n));
}
