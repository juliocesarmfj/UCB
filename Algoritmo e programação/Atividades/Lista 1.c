//1- Construa um algoritmo que leia um número inteiro de horas e mostre ao usuário o correspondente em minutos e segundos destas horas.
#include <stdio.h>
int main (){
	int hora,minuto,segundos;
	printf("escrever a hora ");
	scanf("%i", &hora);
	
	minuto = hora*60;
	printf("%i minutos ");
	segundos = minuto*60;
	printf("%i segundos");
	
	
}

//2- Construa um algoritmo que calcule a área de um círculo cujo raio é fornecido pelo usuário (use área= 3.14 x raio2)
 
#include <stdio.h>
int main (){
float raio,area;

printf ("digite o raio do circulo: ");
scanf ("%f", &raio);

area = 3.14 * (raio * raio);

printf ("%f", area);


}

//3- Construa um algoritmo que calcule a média aritmética de 3 números quaisquer fornecidos pelo usuário.

#include <stdio.h>
int main (){

int media, valor1, valor2, valor3;

printf ("digite valor 1: "); 
scanf ("%i", &valor1);

printf ("digite valor 2: ");
scanf ("%i", &valor2);

printf ("digite valor 3: ");
scanf ("%i", &valor3);

media= (valor1+valor2+valor3)/3;

printf ("Media: %i", media);

}

//4- Construa um algoritmo que a partir da leitura de dois números forneça o resto e o quociente da divisão do primeiro pelo segundo número.

#include <stdio.h>
int main (){
	int valora, valorb, restodadivisao, valordadivisao;
	
	printf("digite o valor a: ");
	scanf ("%i", &valora);
	
	printf("digite o valor b: ");
	scanf ("%i", &valorb);
	
	restodadivisao = valora % valorb;
	valordadivisao = valora / valorb;
	
	printf ("resto da divisao: %i\n", restodadivisao);
	printf ("valor da divisao: %i", valordadivisao);
	
	
}

//5- Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a quantidade de metros avulsos de fios que ele precisa adquirir. 
//Sabe-se que o construtor tem a quantidade total de fios em metros a serem utilizados na instalaçãoelétrica da obra e que cada rolo de fio tem 50 metros.

#include <stdio.h>
int main (){
	int metros, rolos,metrosavulsos;
	
	printf("digite o valor a: ");
	scanf ("%i", &metros);
	
	rolos=metros / 50;
	metrosavulsos = metros %50;
	
	
	printf ("rolos: %i\n", rolos);
	printf ("metros avulsos: %i", metrosavulsos);
	
	
}

//6- Leia 2 valores A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a média do aluno, 
//sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0.

#include <stdio.h>
int main (){
	float notaA, notaB, media, aprovado, reprovado;
	
	printf ("peso nota A: 3.5\n");
    printf ("peso nota B: 7.5\n");
	
	printf("digita a nota A: ");
	scanf ("%f", &notaA);
	
	printf("digita a nota B: ");
	scanf ("%f", &notaB);
	
	media= (3.5*notaA+7.5*notaB)/11;
	
	if (media>5.5){
		printf(" _ __   __ _ ___ ___  ___  _   _ \n");
		printf("| '_ \\ / _` / __/ __|/ _ \\| | | |\n");
		printf("| |_) | (_| \\__ \\__ \\ (_) | |_| |\n");
		printf("| .__/ \\__,_|___/___/\\___/ \\__,_|\n");
		printf("|_| \n");
		
	}
	else
	if (media<5.5){
		printf(" _ __ ___ _ __  _ __ _____   _____  _   _ \n");
		printf("| '__/ _ \\ '_ \\| '__/ _ \\ \\ / / _ \\| | | |\n");
		printf("| | |  __/ |_) | | | (_) \\ V / (_) | |_| |\n");
		printf("|_|  \\___| .__/|_|  \\___/ \\_/ \\___/ \\__,_|\n");
		printf("         |_|                              \n");
	}
 
	printf("media:%2.f", media);	
}

//7- Escreva um programa que leia o nome do funcionário, o sexo (F ou M), o número de matrícula do funcionário, o número de horas trabalhadas, 
//o valor que recebe por hora e calcule o salário desse funcionário. A seguir, mostre todos os dados na tela, os dados de entrada e os dados de saída.

#include <stdio.h>
int main (){
	char nome[30];
	float salario, horam;
	int matricula,horast, sexo;
   
	
	printf("Informe seu nome: ");
	scanf ("%s", &nome);
	
	printf("Informe a sua matricula: ");
	scanf ("%i", &matricula);
	
	printf("Digite 1 para masculino\nDigite 2 para feminino\ninforme seu sexo: ");
	scanf("%i", &sexo);
	
	printf ("Informe horas de trabalho no dia: ");
	scanf ("%i", &horast);
	
	printf ("Informe o valor recebido por hora: ");
	scanf ("%f", &horam);
	
	salario= (horast*30)*horam;
	
	printf("\n");
	printf("   _____ _    _  _____ ______  _____ _____  ____\n");
	printf("  / ____| |  | |/ ____|  ____|/ ____/ ____|/ __ \\\n");
	printf(" | (___ | |  | | |    | |__  | (___| (___ | |  | |\n");
	printf("  \\___ \\| |  | | |    |  __|  \\___ \\\\___ \\| |  | |\n");
	printf("  ____) | |__| | |____| |____ ____) |___) | |__| |\n");
	printf(" |_____/ \\____/ \\_____|______|_____/_____/ \\____/\n ");
	printf("---------------------------------------------------------\n");
    printf("\n");
    
    
	printf("Nome de usuario:%s\nMatricula:%i\n", nome, matricula);
	
	switch (sexo){
		
		case 1:
			printf("Sexo:Masculino");
		break;
		case 2:
			printf("Sexo:Feminino");
			
		break;
	}
	
    printf("\nHoras trabalhadas no dia:%i\nValor recebido por hora:%.2f\nSalario mensal:%.2f",horast,horam,salario);

}
