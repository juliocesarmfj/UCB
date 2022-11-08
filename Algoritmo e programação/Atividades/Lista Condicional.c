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

/*2- Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois
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

/*3- Faça um programa que leia um número inteiro e verifique se esse número é par ou
ímpar*/

#include <stdio.h>
int main(){
    int numero;

    printf("escreva um numero: ");
    scanf("%i", &numero);

    if (numero%2==0){
        printf("o numero e par");
    }
    else{
        printf("o numero e impar");


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


/*5- Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: o
número digitado ao quadrado e raiz quadrada do número digitado*/

#include <stdio.h>
#include <math.h>

int main(){
int numero,quadrado,raiz;

printf ("digite o numero: ");
scanf("%i", &numero);

if(numero<0){
    printf("O numero apresentado e negativo");
}

else{
    quadrado=numero*numero;
    raiz=sqrt(numero);

    printf("o quadrado do numero %i e:%i\na raiz quadrada de %i e: %i",numero,quadrado,numero,raiz);


}


}


/*6- Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre 
seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura)*/
#include <stdio.h>
int main(){
    float altura, peso;
    int sexo;

    printf("Digite 1 para masculino e 2 para feminino: ");
    scanf("%i",&sexo);
    
    printf("digite aqui a sua altura: ");
    scanf("%f",&altura);
    fflush (stdin);


    switch (sexo){
        
        case 1: 
        peso=(72.7*altura)-58;

        printf("\nSeu peso ideal e: %2.f kg",peso);
        break;

        case 2:
        peso=(62.1*altura)-44.7;

        printf("\nSeu peso ideal e: %2.f kg",peso);

    }

}

/*7- Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior
do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem
positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão
escrever "Valores nao aceitos".*/

#include <stdio.h>
int main(){
    int n[4],i;

    for(i=0; i<4; i++){
      printf("Digite o valor %i: ",i+1);
      scanf("%i",&n[i]);

    }
 
        if (n[2]+n[3]>n[0]+n[1] && n[2]>0 && n[3]>0 && n[1]>n[2] && n[3]>n[0] && n[0]%2==0) {
        printf("numeros aceitos");
        }

        else{
            printf("numeros invalidos");
        }


}

/* 8- Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o
usuário entre com o valor e o estado de destino do produto e o programa retorne o preço
final do produto acrescido do imposto do estado em que ele será vendido. Se o estado
digitado não for válido, mostrará uma mensagem de erro.
*/


/*9- Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:
*/

#include <stdio.h>

int main(){
    int idade;

    printf("Informe a idade do nadador\n");
    scanf("%i",&idade);

    switch(idade){

        case 0 ... 4:
        printf("idade invalida");
        break;

        case 5 ... 7:
        printf("Infantil A");
        break;

        case 8 ... 10:

        printf("Infantil B");
        break;

        case 11 ... 13:

        printf("juvenil A");
        break;

        case 14 ... 17:

        printf("juvenil B");
        break;

        default:

        printf("senior");
        break;




    }




}
