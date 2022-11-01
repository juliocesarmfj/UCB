#include<stdio.h>
#include<math.h>

// somar, sub, mult, div

int somar( int numero1, int numero2);
int sub( int numero1, int numero2);
int mult( int numero1, int numero2);
int div( int numero1, int numero2);
int raiz( int numero1);

int main(){
int numero1, numero2, resultado, condicao;
printf("Qual calculo deseja realizar (1)soma  (2)subtracao (3) multiplicacao (4) divisao (5)raiz:  \n");
scanf("%d", & condicao);
printf("Digite o numero 1: ");
scanf("%d", &numero1);
printf("Digite o numero 2: ");
scanf("%d", &numero2);
if(condicao == 1)
printf("resultado da soma: %d", somar(numero1, numero2));
else if( condicao==2)
printf("resultado da subtracao: %d", sub(numero1, numero2));
else if( condicao==3)
printf("resultado da multiplicacao: %d", mult(numero1, numero2));
else if( condicao==4)
printf("resultado da divisao: %d", div(numero1, numero2));
else if(condicao==5)
printf("Resultado da raiz: %d", raiz(numero1));
}

int somar( int numero1, int numero2){
int resultado;
resultado = numero1 + numero2;
return resultado;
}

int sub( int numero1, int numero2){
int resultado;
resultado = numero1 - numero2;
return resultado;
}

int mult( int numero1, int numero2){
int resultado;
resultado = numero1 * numero2;
return resultado;
}

int div( int numero1, int numero2){
int resultado;
resultado = numero1 / numero2;
return resultado;
}

int raiz( int numero1){
int resultado;
resultado = sqrt(numero1);
return resultado;
}
