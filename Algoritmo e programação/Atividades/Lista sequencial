/*1- O seu primeiro programa em qualquer linguagem de programação normalmente é
o "Hello World!". Neste primeiro problema tudo o que você precisa fazer é imprimir
esta mensagem na tela.*/

#include <stdio.h>
int main(){

    printf("Hello World!");
}

/*2- Faça um algoritmo que imprima o poema abaixo, com a mesma formatação*/

#include <stdio.h>
int main(){
    printf("Caderno de poesias e um belo lugar.\nTantas coisa lindas que eu gostaria de falar.\nEu falo em forma de versos para todos poderem escutar.\nAgora voce ja sabe por que os poetas passam os dias escrevendo em seu cadernos de poesias");
}

/*3- Faça um algoritmo que leia um numero inteiro, dois números reais (um float e um
double), um caracter (uma única letra), uma string (conjunto de caracteres) e um
booleano. Na sequência, imprima todos com a formatação abaixo.*/

#include <stdio.h>
int main(){
    int inteiro;
    float numerofloat;
    double numerodouble;
    char letra;
    char palavra[5];

    printf("Digite o numero inteiro: ");
    scanf("%i",&inteiro);
    printf("Digite 2 numeros reais: ");
    scanf("%f%lf",&numerofloat,&numerodouble);
    fflush(stdin);
    printf("Escreva uma letra: ");
    scanf("%c",&letra);
    fflush(stdin);
    printf("Escreva uma palavra: ");
    fgets(palavra,5,stdin);

    printf("Numero inteiro: %i\nNumero Reais:%f,%lf\nLetra:%c\nString:%s",inteiro,numerofloat,numerodouble,letra,palavra);


}

/*4- Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma
de A e B atribuindo o seu resultado na variável X. Imprima o resultado da seguinte
forma “valor de A” + “valor de B” = “valor de X”.*/

#include <stdio.h>
int main(){
    int a,b,x;

    printf("Digite 2 numeros: ");
    scanf("%i%i",&a,&b);

    x=a+b;

    printf("%i + %i = %i",a,b,x);
}

/*5- Faça o mesmo exercício, porém, realizando o calculo dentro do printf*/

#include <stdio.h>
int main(){
    int a,b,x;

    printf("Digite 2 numeros: ");
    scanf("%i%i",&a,&b);

    printf("%i + %i = %i",a,b,x=a+b);
}

/*6- Faça o mesmo exercício, atribuindo valor às variávies A e B (não é necessário
solicitar ao usuário, os valores serão atribuídos no próprio código)*/

#include <stdio.h>
int main(){
    int a=2,b=2,x;

    printf("%i + %i = %i",a,b,x=a+b);
}

/*7- Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e
atribua esta operação à variável PROD. A seguir mostre a variável PROD com
mensagem: PROD = “valor de PROD”.*/

#include <stdio.h>
int main(){
    int a,b,prod;

    printf("Digite os dois valores: ");
    scanf("%i%i",&a,&b);

    printf("Prod=%i",prod=a*b);
}

/*8- Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B -
C * D). Apresente o resultado da seguinte forma:*/

#include <stdio.h>
int main(){
    int a,b,c,d,diferenca;

    printf("Digite os valores: ");
    scanf("%i%i%i%i",&a,&b,&c,&d);

    printf("Diferenca = %i * %i - %i * %i\n",a,b,c,d);
    printf("Diferenca:%i",diferenca=(a*b)-(c*d));
}

/*9- Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de
vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha
15% de comissão sobre suas vendas efetuadas, informar o total a receber no final
do mês, com duas casas decimais.*/

#include <stdio.h>
int main(){
    char nome[15];
    float salario,final;
    int vendas;

    printf("Digite o nome do vendedor: ");
    fgets(nome,15,stdin);
    printf("Digite o seu salario fixo: ");
    scanf("%f",&salario);
    printf("Digite o total de vendas efetuadas por %s",nome);
    scanf("%i",&vendas);

    printf("%sdevera receber no final do mes:%.2f",nome,final=salario+(vendas*0.15));


}

/*10- Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer
no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas
decimais após a vírgula, segundo a fórmula:*/

#include <stdio.h>
#include <math.h>
int main(){
    float distancia;
    int i,x[2],y[2];

    for(i=0;i<2;i++){
        printf("Digite o valor de X%i",i+1);
        scanf("%i",&x[i]);
        printf("Digite o valor de Y%i",i+1);
        scanf("%i",&y[i]);
    }
    distancia = sqrt(pow(x[1]-x[0],2)+pow(y[1]-y[0],2));
    printf("A distancia sera de: %.2f",distancia);

}

/*11- Faça um programa que calcule e mostre a área da superfície e o volume de uma
esfera sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é:
(4/3) * pi * R³. A fórmula para calcular a área é: 4 * pi * R². Considere (atribua)
para pi o valor 3.14159. Use o conceito de constante Dica: Ao utilizar a fórmula,
procure usar (4/3.0) ou (4.0/3), pois algumas linguagens (dentre elas o C++),
assumem que o resultado da divisão entre dois inteiros é outro inteiro.*/

#include <stdio.h>
#include <math.h>
int main(){
    float pi=3.14159,raio;
    double volume,area;

    printf("Digite o valor do raio: ");
    scanf("%f",&raio);

    volume = (4.0/3)*pi*(pow(raio,3));
    area = 4*pi*(pow(raio,2));

    printf("Volume:%.2lf\nArea:%.2lf",volume,area);


}





