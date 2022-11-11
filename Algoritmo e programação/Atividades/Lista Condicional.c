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
#include <stdio.h>
#include <string.h>

int main(){
    char valor[2];
    float numero,resultado;

    printf("digite o estado: ");
    fgets(valor,3,stdin);
    printf("Digite o valor: ");
    scanf("%f",&numero);

    if(strstr(valor, "mg") || (strstr(valor,"MG"))){
        resultado = numero+(numero*0.07);
        printf("O valor em Minas Gerais sera de %.2f",resultado);
    }
    else if(strstr(valor,"sp") || (strstr(valor,"SP"))){
        resultado = numero+(numero*0.12);
        printf("O valor em Sao Paulo sera de %.2f",resultado);
    }
    else if(strstr(valor,"rj") || (strstr(valor,"RJ"))){
        resultado = numero+(numero*0.15);
        printf("O valor em Rio de Janeiro sera de %.2f",resultado);
    }
    else if(strstr(valor,"ms") || (strstr(valor,"MS"))){
        resultado = numero+(numero*0.08);
        printf("O valor em Mato Grosso do Sul sera de %.2f",resultado);
    }
    else{
        printf("Erro, estado nao encontrado");
    }
}


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

/*10- Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a
seguir, verifique e mostre qual a classificação dessa pessoa*/

#include <stdio.h>

int main(){
    float altura;
    int peso;


    printf("Informe a altura: ");
    scanf("%f",&altura);

    printf("informe o peso: ");
    scanf("%i",&peso);

    if(altura<=1.20){

        switch(peso){

        case 0 ... 60:
        printf("A");
        break;

        case 61 ... 90:
        printf("D");
        break;

        default: 
        printf("G");

        }
    }
      
    else if(altura>1.20 && altura<1.70){

        switch(peso){

        case 0 ... 60:
        printf("B");
        break;

        case 61 ... 90:
        printf("E");
        break;

        default: 
        printf("H"); 

        }
    }

    else if(altura>1.70){

        switch(peso){
        case 0 ... 60:
        printf("C");
        break;

        case 61 ... 90:
        printf("F");
        break;

        default: 
        printf("I");

    }


}

}

/*11- Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na
tabela a seguir:*/

#include <stdio.h>

int main(){

    int i,numero[3],caso,resultado;

    for(i=0;i<3; i++){
        printf("digite o valor %i: ",i+1);
        scanf("%i",&numero[i]);
    }

    printf("Escolha qual media deseja efetuar:\n1-Geometrica\n2-Ponderada\n3-Harmonica\n4-Aritmetica\n");
    scanf("%i",&caso);
    printf("\n");


    switch(caso){

        case 1: 

        resultado = numero[0]*numero[1]*numero[2];

        printf("Resultado: %i",resultado);
        break;
    

        case 2:

        resultado = (numero[0]+2*numero[1]+3*numero[2])/6;

        printf("Resultado: %i",resultado);
        break;

        case 3:

        resultado = 1/((1/numero[0])+(1/numero[1])+(1/numero[2]));

        printf("Resultado: %i",resultado);
        break;

        case 4:

        resultado = (numero[0]+numero[1]+numero[2])/3;

        printf("Resultado: %i",resultado);
        break;

        default:

        printf("valor invalido!");
        break;



    }

}

/*12 - Leia 2 valores com uma casa decimal (x e y), que devem representar as
coordenadas de um ponto em um plano. A seguir, determine qual o quadrante
ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na
origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem
*/

#include <stdio.h>

int main(){

    int x,y;

    printf("Me informe o valor de X");
    scanf("%i",&x);
    printf("Me informe o valor de Y");
    scanf("%i",&y);

    if(x==0 && y==0){
        printf("Origem");
    }  
    else if(x==0){
        printf("Eixo X");
    } 
    else if(y==0){
        printf("Eixo Y");
    }  
    else if(x>0 && y>0) {

        printf("O ponto se encontra no primeiro quadrante");
    }
    else if(x<0 && x<0){

        printf("O ponto se encontra no terceiro quadrante");

    }
    else if(x>0 && y<0){
        printf("O ponto se encontra no quarto quadrante");
    }
    else if(x<0 && y>0){
        printf("O ponto se encontra no segundo quadrante");
    }
   

}

/*13 Faça um programa que informe o mês de acordo com o número digitado pelo usuário.
Exemplo: Entrada = 4. Saída = Abril.*/
#include <stdio.h>
int main(){
    int mes;

    printf("Informe o numero do mes desejado: ");
    scanf("%i",&mes);

    if(mes == 1){

        printf("Janeiro");
        
    }
    else if(mes == 2){
        printf("Fevereiro");
        

    }
    else if(mes == 3){
        printf("marco");
       
        
    }
    else if(mes == 4){
        printf("abril");
        
        
    }
    else if(mes == 5){
        printf("maio");
        
        
    }
    else if(mes == 6){
        printf("junho");
        
        
    }
    else if(mes == 7){
        printf("julho");
        
        
    }
    else if(mes == 8){
        printf("agosto");
        
        
    }
    else if(mes == 9){
        printf("setembro");
        
        
    }
    else if(mes == 10){
        printf("outubro");
        
        
    }
    else if(mes == 11){
        printf("novembro");
        
        
    }
    else if(mes == 12){
        printf("dezembro");
        
        
    }
    else{
        printf("valor invalido");
        
    }







}

/*14- Reescreva o algoritmo do exercicio 13 utilizando o comando switch*/

#include <stdio.h>
int main (){
    int mes;

    printf("Me forneca a posicao o mes :");
    scanf("%i",&mes);
 
 switch (mes)
 {
 case 1:
    printf("Janeiro");
    break;

 case 2:
    printf("fevereiro ");
    break;

case 3:
    printf("marco");
    break;

case 4:
    printf("abriu");
    break;

case 5:
    printf("maio");
    break;

case 6:
    printf("junho");
    break;
    
case 7:
    printf("julho");
    break;
    
case 8:
    printf("agosto");
    break;
    
case 9:
    printf("setembro");
    break;
    
case 10:
    printf("outubro");
    break;
    
case 11:
    printf("novembro");
    break;

case 12:
    printf("dezembro");
    break;


 default:
 printf("Mes nao selecionado ou inexistente");
    break;
 }   
}

/*15- Reescreva o algoritmo do exercicio 13 utilizando o comando switch*/

#include<stdio.h>
int main(){
	int semana;
	
	printf("Digite um valor de 1 a 7.\n");
	scanf("%i", &semana);


	switch(semana)
    {
		case 1:
			printf("Domingo.\n");
			break;
		
		case 2:
		    printf("Segunda.\n");
		    break;
		    
		case 3:
		    printf("Terca.\n");
		    break;
		case 4:
		    printf("Quarta.\n");
		    break;
	    case 5:
		    printf("Quinta.\n");
		    break;
	    case 6:
		    printf("Sexta.\n");
		    break;
	    case 7:
		    printf("Sabado.\n");
		    break;
		default:
		   printf("Numero invalido:");   
		     break; 
	 
				
	}
	
	
}

/*16- Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a
qual cidade pertence, considerando só os seguintes valores:*/
#include <stdio.h>
int main (){
    int numero,ddd;

    printf("Digite o DDD: ");
    scanf("%i",&ddd);
    printf("Digite o numero: ");
    scanf("%i",&numero);

    switch(ddd){

        case 61:
        printf("Brasilia");
        break;
        case 71:
        printf("Salvador");
        break;
        case 11:
        printf("Sao Paulo");
        break;
        case 21:
        printf("Rio de Janeiro");
        break;
        case 32:
        printf("Juiz de fora");
        break;
        case 19:
        printf("Campinas");
        break;
        case 27:
        printf("Vitoria");
        break;
        case 31:
        printf("Belo Horizonte");
        break;
        default:
        printf("Uma cidade no Brasil sem identificacao");
        break;
    }

    printf(" [%i] %i",ddd,numero);




     
}

/*17- Faça um programa que mostre ao usuário um menu com quatro opções de operações
matemáticas (as operações básicas, por exemplo). O usuário escolhe uma das opções, e
o seu programa pede dois valores numéricos e realiza a operação, mostrando o
resultado.*/
#include <stdio.h>
int main (){
    int soma,sub,div,multi,n1,n2,operacao;

    printf("Qual operacao deseja realizar?\n1-soma\n2-subtracao\n3-divisao\n4-multiplicacao\n");
    scanf("%i",&operacao);

    printf("Digite os numeros: ");
    scanf("%i %i",&n1,&n2);

    switch (operacao){

        case 1:

        soma = n1+n2;
        printf("\nresultado: %i",soma);
        break;

        case 2:

        sub = n1-n2;
        printf("\nresultado: %i",sub);
        break;

        case 3:

        div = n1/n2;
        printf("\nresultado: %i",div);
        break;

        case 4:

        multi = n1*n2;
        printf("\nresultado: %i",multi);
        break;
    }     
}

/*18 - Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou
5, mas não simultaneamente pelos dois.*/

#include <stdio.h>
#include <math.h>'
int main (){
    int numero,operacao2,operacao5;

    printf("digite um numero: ");
    scanf("%i",&numero);

    operacao2 = numero%2;
    operacao5 = numero%5;

    if (operacao2 == operacao5){

        printf("Nao e possivel realizar essa conta, os dois numeros sao divisiveis");

    }
    else if (operacao2 == 0){

        printf("O numero %i e divisivel por 2",numero);
    }
    else if (operacao5 == 0){

        printf("O numero %i e divisivel por 5",numero);
    }
    else{

        printf("Os numeros nao sao divisiveis");
    } 

}

/*19- Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um
valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual
o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As
moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de
notas necessárias.
*/
#include <stdio.h>
#include <math.h>


int main(){

    int numero,centavos,posicao1,posicao2,posicao3,posicao4,posicao5,quantidade;
    
    printf("Digite o valor: ");
    scanf("%i",&numero);

    quantidade = log10(numero)+1;

    switch(quantidade){

        case 1:

        posicao1 = (numero/1)%10;
        switch (posicao1){
            case 0:
            printf("\n");
            break;
            case 1:
            printf("precisara de 1 moeda de 1 real\n");
            break;
            case 2:
            printf("precisara de 1 nota de 2 reais\n");
            break;
            case 3:
            printf("precisara de 1 nota de 2 reais e 1 moeda de 1 real");
            break;
            case 4:
            printf("precisara de 2 notas de 2 reais");
            break;
            case 5:
            printf("Precisara de 1 nota de 5 reais\n");
            break;
            case 6:
            printf("precisara de 1 nota de 5 reais e 1 moeda de 1 real\n");
            break;
            case 7:
            printf("precisara de 1 nota de 5 reais e 1 nota de 2 reais\n");
            break;
            case 8:
            printf("precisara de 1 nota de 5 reais e 1 nota de 2 reais e 1 moeda de 1 real");
            break;
            case 9:
            printf("precisara de 1 nota de 5 reais e 2 notas de 2 reais\n");
            break;

        }
        
        break;
        case 2:
        posicao1 = (numero/10);
        posicao2 = (numero/1)%10;
        
        switch(posicao1){
            case 0:
            printf("\n");
            break;
            case 1:
            printf("precisara de 1 nota de 10 reais\n");
            break;
            case 2:
            printf("precisara de 1 nota de 20 reais\n");
            break;
            case 3:
            printf("precisara de 1 nota de 20 reais e 1 de 10 reais\n");
            break;
            case 4:
            printf("precisara de 2 notas de 20 reais\n");
            break;
            case 5:
            printf("precisara de 1 nota de 50 reais\n");
            break;
            case 6:
            printf("precisara de 1 nota de 50 reais e 1 de 10 reais\n");
            break;
            case 7:
            printf("precisara de 1 nota de 50 reais e 1 de 20 reais\n");
            break;
            case 8:
            printf("precisara de 1 nota de 50 reais e 3 de 10 reais\n");
            break;
            case 9:
            printf("precisara de 1 nota de 50 reais e 2 de 20 reais\n");
            break;
        }
        switch (posicao2){
            
            case 0:
            printf("\n");
            break;
            case 1:
            printf("precisara de 1 moeda de 1 real\n");
            break;
            case 2:
            printf("precisara de 1 nota de 2 reais\n");
            break;
            case 3:
            printf("precisara de 1 nota de 2 reais e 1 moeda de 1 real");
            break;
            case 4:
            printf("precisara de 2 notas de 2 reais");
            break;
            case 5:
            printf("Precisara de 1 nota de 5 reais\n");
            break;
            case 6:
            printf("precisara de 1 nota de 5 reais e 1 moeda de 1 real\n");
            break;
            case 7:
            printf("precisara de 1 nota de 5 reais e 1 nota de 2 reais\n");
            break;
            case 8:
            printf("precisara de 1 nota de 5 reais e 1 nota de 2 reais e 1 moeda de 1 real");
            break;
            case 9:
            printf("precisara de 1 nota de 5 reais e 2 notas de 2 reais\n");
            break;
        }
        case 3:
         
         posicao1 = (numero/100);
         posicao2 = (numero/10)%10;
         posicao3 = (numero/1)%10;
        switch (posicao1){
            case 1:
            printf("precisara de 1 nota de 100 reais\n");
            break;
            case 2 ... 9:
            printf("precisara de %i notas de 100 reais\n",posicao1);
            break;
    } 


        switch(posicao2){
            case 0:
            printf("\n");
            break;
            case 1:
            printf("precisara de 1 nota de 10 reais\n");
            break;
            case 2:
            printf("precisara de 1 nota de 20 reais\n");
            break;
            case 3:
            printf("precisara de 1 nota de 20 reais e 1 de 10 reais\n");
            break;
            case 4:
            printf("precisara de 2 notas de 20 reais\n");
            break;
            case 5:
            printf("precisara de 1 nota de 50 reais\n");
            break;
            case 6:
            printf("precisara de 1 nota de 50 reais e 1 de 10 reais\n");
            break;
            case 7:
            printf("precisara de 1 nota de 50 reais e 1 de 20 reais\n");
            break;
            case 8:
            printf("precisara de 1 nota de 50 reais e 3 de 10 reais\n");
            break;
            case 9:
            printf("precisara de 1 nota de 50 reais e 2 de 20 reais\n");
            break;
        }

        switch (posicao3){
            
            case 0:
            printf("\n");
            break;
            case 1:
            printf("precisara de 1 moeda de 1 real\n");
            break;
            case 2:
            printf("precisara de 1 nota de 2 reais\n");
            break;
            case 3:
            printf("precisara de 1 nota de 2 reais e 1 moeda de 1 real");
            break;
            case 4:
            printf("precisara de 2 notas de 2 reais");
            break;
            case 5:
            printf("Precisara de 1 nota de 5 reais\n");
            break;
            case 6:
            printf("precisara de 1 nota de 5 reais e 1 moeda de 1 real\n");
            break;
            case 7:
            printf("precisara de 1 nota de 5 reais e 1 nota de 2 reais\n");
            break;
            case 8:
            printf("precisara de 1 nota de 5 reais e 1 nota de 2 reais e 1 moeda de 1 real");
            break;
            case 9:
            printf("precisara de 1 nota de 5 reais e 2 notas de 2 reais\n");
            break;

        }
        break;
}
}

/*20-  Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal,
correspondente às quatro notas de um aluno. Calcule a média com pesos 2, 3, 4 e 1,
respectivamente, para cada uma destas notas e mostre esta média acompanhada pela
mensagem "Media: ". Se esta média for maior ou igual a 7.0, imprima a
mensagem "Aluno aprovado.". Se a média calculada for inferior a 5.0, imprima a
mensagem "Aluno reprovado.". Se a média calculada for um valor entre 5.0 e 6.9,
inclusive estas, o programa deve imprimir a mensagem "Aluno em exame.". No caso do
aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo aluno.
Imprima então a mensagem "Nota do exame: " acompanhada pela nota digitada.
Recalcule a média (some a pontuação do exame com a média anteriormente calculada e
divida por 2). e imprima a mensagem "Aluno aprovado." (caso a média final seja 5.0 ou
mais ) ou "Aluno reprovado.", (caso a média tenha ficado 4.9 ou menos). Para estes dois
casos (aprovado ou reprovado após ter pego exame) apresente na última linha uma
mensagem "Media final: " seguido da média final para esse aluno.*/
#include <stdio.h>
int main(){
    int i;
    float numero[4],recup,media;

    for(i=0;i<4;i++){
        printf("Digite o Numero %i",i+1);
        scanf("%f",&numero[i]);
    }

    media = ((numero[0]*2)+(numero[1]*3)+(numero[2]*4)+(numero[3]*1))/10;

    if(media>=7){
        printf("Aluno aprovado");
    }
    else if(media<=5){
        printf("Aluno reprovado");
    }
    else{
        printf("Aluno em exame\n");

        printf("media: %.1f\n",media);
        printf("Digite a nota adquirida na recuperacao: ");
        scanf("%f",&recup);

        media = (media + recup)/2;

        if (media>10){
            media = 10;
        }
        

        if(media>=5){
            printf("Aluno aprovado\nmedia final:%.1f",media);
        }
        else{
            printf("Aluno reprovado\nmedia final:%.1f",media);
        }



    }

}

/*21- Faça um programa que leia os coeficientes de uma equação do segundo grau. Em
seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são
calculadas como*/

#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,delta,resposta1,resposta2;

    printf("Digite o valor de A");
    scanf("%i",&a);
    printf("Digite o valor de B");
    scanf("%i",&b);
    printf("Digite o valor de C");
    scanf("%i",&c);

    delta = (pow(b,2)-(4*a*c));
    
    resposta1 = ((-1*b)+(sqrt(delta)))/(2*a);
    resposta2 = ((-1*b)-(sqrt(delta)))/(2*a);


    if(delta<0){
        printf("Nao existe raiz");
    }
    else if(delta==0){
        printf("Raiz Unica: %i",resposta1);

    }
    else if(delta>0){
        printf("Existem duas raizes:\nx1:%i\nx2:%i",resposta1,resposta2);
    }


}


