/*1- Faça um programa que leia dois números e mostre qual deles é o maior.*/

#include <stdio.h>
int main(){
    int numero1,numero2;

    printf ("Digite um numero: ");
    scanf("%i", &numero1);
    printf("Digite um numero: ");
    scanf("%i", &numero2);

    if(numero1>numero2){
        printf("%i e maior",numero1);
    }
    else{printf("%i e maior",numero2);
    }
}

/*2-Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois
números forem iguais, imprima a mensagem “Números iguais”.*/
#include <stdio.h>
int main(){
    int numero1,numero2;

    printf ("Digite um numero: ");
    scanf("%i", &numero1);
    printf("Digite um numero: ");
    scanf("%i", &numero2);

    if(numero1==numero2){
        printf("Os numeros apresentados sao iguais");
    }
   
    else if(numero1>numero2){
        printf("%i e maior",numero1);
    }
    else{printf("%i e maior",numero2);
    }

}




