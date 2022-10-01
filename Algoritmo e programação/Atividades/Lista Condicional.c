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

/*4- Faça um programa que leia o salário de um trabalhador e o valor da prestação de um
empréstimo. Se a prestação, for maior que 20% do salário, imprima: “Empréstimo não
concedido.”, caso contrário, imprima: “Empréstimo concedido.”*/
#include <stdio.h>
int main(){
    float salario,emprestimo,resultado,soma;

    printf("Digite o salario recebido: ");
    scanf("%f",&salario);

    printf("Digite aqui o valor do emprestimo: ");
    scanf("%f",&emprestimo);


    if(salario<0.2*emprestimo){
        printf("Empréstimo não concedido");


    }
    else{
        printf("Empréstimo concedido");


    }
    
}


