/*
EXERCÍCIOS DO CAPÍTULO 2
*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

//1. Faça um programa que leia dois valores numéricos inteiros e efetue a adição, caso o resultado seja maior que 10, apresentá-lo.
void questao01() {
int num1, num2, soma;	
printf ("informe dois valores inteiros: \n");
scanf ("%d %d", &num1, &num2);
soma = num1+num2;
if (soma > 10)
 printf ("A soma dos valores é: \n %d \n", soma);
else 
 printf ("Soma menor que 10!!");
}

//2. Faça um programa que leia dois valores inteiros e efetue a adição. Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8, caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.
void questao02() {
 int num1, num2, soma;
 printf ("Informe dois valores inteiros: \n");
 scanf ("%d %d", &num1, &num2);
 soma = num1+num2;
 if (soma > 20)	
  printf	("Novo valor somado +8: \n %d", soma +8);
else 
 printf ("Novo valor subtraido -5: \n %d", soma -5);
}

//3. Faça um programa que leia um número e imprima uma das duas mensagens: "É múltiplo de 3"ou "Não é múltiplo de 3".
void questao03() {
int  num;
 printf ("Informe um valor:");
 scanf ("%d", &num);
  if (num % 3 == 0)
  printf ("Valor múltiplo de 3!! \n");
 else
  printf ("Valor não múltiplo de 3!!\n");
}

//4. Faça um programa que leia um número e informe se ele é ou não divisível por 5.
void questao04() {
int  num;
 printf ("Informe um valor:");
 scanf ("%d", &num);
  if (num % 5 == 0)
  printf ("Valor divisivel por 5!! \n");
 else
  printf ("Valor não divisível por 5!!\n");
}

//5. Faça um programa que leia um número e informe se ele é divisível por 3 e por 7.
void questao05() {
 int  num;
  printf ("Informe um valor:");
  scanf ("%d", &num);
 if ((num % 3 == 0) && (num % 7 == 0))
  printf ("Valor divisível por 3 e 7!! \n");
 else
  printf ("Valor não divisível por 3 e 7!!\n");
}

//6. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
//estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
//bruto. Faça um programa em linguagem C que permita entrar com o salário bruto e o
//valor da prestação e informar se o empréstimo pode ou não ser concedido.
void questao06() {
 float salb, presta, emprest;
 printf ("Informe seu salário bruto e o valor da prestação: \n");
 scanf ("%f %f", &salb, &presta);
 emprest = salb * 0.3;
 if (presta > emprest )      
  printf ("Empréstimo não aprovado!! \n");
else
 printf ("Emprestido aprovado!! \n");	
}

//7. Faça um programa que leia um número e indique se o número está compreendido
//entre 20 e 50 ou não.
void questao07() {
float num;
printf ("Informe um valor: \n");
scanf ("%f", &num);
if ((num > 20) && (num <50))
 printf ("Valor esta entre 20 e 50!!");
else 
 printf ("Valor fora dos parâmetros");
}

//8. Faça um programa que leia um número e imprima uma das mensagens: 
//"Maior do que 20", "Igual a 20"ou "Menor do que 20".
void questao08() {
 float num;
 printf ("Informe um valor: \n");
 scanf("%f", &num);
 if (num > 20)
  printf ("Maior que 20!!");
 else if (num == 20)
  printf ("Igual a 20!!");
else 
  printf ("Menor que 20!!");	
}

//9. Faça um programa que permita entrar com o ano de nascimento da pessoa e como ano
//atual. O programa deve imprimir a idade da pessoa. Não se esqueça de verificar se o
//ano de nascimento informado é válido.
void questao09() {
 int anon, ano, data;
printf ("Informe seu ano de nascimento e o ano atual (apenas numeros): \n");
scanf ("%d %d", &anon, &ano);
if (anon < ano) {
 data = ano - anon; 
 printf ("A idade é: \n %d", data);
}
else
 printf ("Ano inválido!!");
}

//10. Faça um programa que leia três números inteiros e imprima os três em ordem
//crescente.
void questao10() {
int num1, num2, num3;
printf ("Informe tres valores inteiros:");
scanf ("%d %d %d", &num1, &num2, &num3);
if (num1 <= num2 && num2 <= num3)
  printf ("%d %d %d \n", num1, num2, num3);
else if  (num2 <= num1 && num1 <= num3)
  printf ("%d %d %d \n", num2, num1, num3);
else if (num3 <= num1 && num1 <= num2)
  printf ("%d %d %d \n", num3, num1, num2);
else if (num3 <= num2 && num2 <= num1)
  printf ("%d %d %d \n",num3, num2, num1);
else if (num2 <= num3 && num3 <= num1)
 printf ("%d %d %d \n", num2, num3, num1);
else if (num1 <= num3 && num3 <= num2)
 printf ("%d %d %d \n", num1, num3, num2);
}

//11. Faça um programa que leia 3 números e imprima o maior deles.
void questao11() {
 int num1, num2, num3;
 printf ("Informe tres valores:");
 scanf ("%d %d %d", &num1, &num2, &num3);
 if (num1 > num2 && num1 > num3)
  printf ("%d", num1);
else if (num2 > num1 && num2 > num3)
 printf ("%d", num2);
else if (num3 > num1 && num3 > num2)
 printf ("%d \n", num3);	
}

//12. Faça um programa que leia a idade de uma pessoa e informe:
//• Se é maior de idade
//• Se é menor de idade
//• Se é maior de 65 anos
void questao12() {
 int idade;
 printf ("Informe sua idade:");
 scanf ("%d", &idade);
 if (idade >= 65)
  printf ("O senhor é Alessandro!! \n");
else if (idade >= 18 &&  idade < 65)
 printf ("Maior de idade!! \n");
else  
 printf ("Menor de idade!! \n");
}

//13. Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
//prova 2 de umaluno. O programa deve imprimir o nome, a nota da prova 1, a nota da prova 2, a média das notas e uma das mensagens: "Aprovado", "Reprovado"ou "em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as demais em prova final).
void questao13() {
 float n1, n2, md;
 char nome [99]; 
 printf ("Informe seu primeiro nome: \n " );
 scanf (" %99[^\n]", nome);
 printf ("Informe suas duas notas: \n");
 scanf ("%f %f", &n1, &n2);
 md = (n1+n2)/2;
 printf ("Aluno: %s \n", nome);
 if (md >= 7)
 printf ("Aprovado!!");
else if (md < 7 && md >= 4)
 printf ("Recuperação!!");
else 
 printf ("Reprovado!!");
}

//14. Faça um programa que permita entrar com o salário de uma pessoa e imprima o
//desconto do INSS segundo a tabela seguir:
//Salário Faixa de Desconto
//Menor ou igual à R$600,00 Isento
//Maior que R$600,00 e menor ou igual a R$1200,00 20%
//Maior que R$1200,00 e menor ou igual a R$2000,00 25%
//Maior que R$2000,00 30%
void questao14() {
  float salario, novo;
  printf ("Informe seu salario:");
  scanf ("%f", &salario);
  if (salario <= 600)
   printf ("Insento de desconto!!");
 else if (salario > 600 && salario <= 1200){
	novo = salario * 0.20;
	printf ("Total de desconto INSS: %.2f \n", novo);
  }
 else if (salario > 1200 && salario <= 2000){
	novo = salario * 0.25;
	printf ("Total de desconto INSS %.2f \n", novo);
 }
 else {
  novo = salario * 0.30;
  printf ("Total de desconto INSS: %.2f \n", novo); 	
 }
}	 

//15. Um comerciante comprou umproduto e quer vendê-lo com umlucro de 45% se o valor
//da compra for menor que R$20,00, caso contrário, o lucro será de 30%. Faça um programa que leia o valor do produto e imprima o valor da venda.

void questao15() {
 float valor, novo;
 printf ("Informe o valor da compra: \n");
 scanf ("%f", &valor);
 if (valor < 20){
 novo = valor + (valor * 0.45);
 printf	("Valor total da venda: %.2f \n", novo);
 } 
 else {
 novo = valor + (valor * 0.30);
 printf ("Valor total da venda: %.2f \n", novo);
 }  
}

//16. A confederação brasileira de natação irá promover eliminatórias para o próximo
//mundial. Faça um programa que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir:
//Categoria Idade
//Infantil A 5 - 7 anos
//Infantil B 8 - 10 anos
//Juvenil A 11 - 13 anos
//Juvenil B 14 - 17 anos
//Sênior maiores de 18 anos
void questao16() {
 int idade;
 printf ("Informe sua idade: \n");
 scanf ("%d", &idade);
 if (idade >= 5 && idade <= 7)
 printf ("Infantil A");
else if (idade > 7 && idade <= 10)
 printf ("Infantil B");	
else if (idade > 10 && idade <= 13)
 printf ("Juvenil A");	
else if (idade > 13 && idade <= 17)
 printf ("Juvenil B");
else
 printf ("Senior");		
}

//17. Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito caro. Umvendedor de um plano de saúde apresentou a tabela a seguir. Faça um programa que entre com o nome e a idade de uma pessoa e imprima o nome e o valor que ela deverá pagar.
//Idade Valor
//Até 10 anos R$30,00
//Acima de 10 até 29 anos R$60,00
//Acima de 29 até 45 anos R$120,00
//Acima de 45 até 59 anos R$150,00
//Acima de 59 até 65 anos R$250,00
//Maior que 65 anos R$400,00
void questao17() {
 int idade;
 char nome [99]	;
 printf ("Informe seu primeiro nome: \n " );
 scanf (" %99[^\n]", nome);
 printf ("Informe sua idade: \n");
 scanf ("%d", &idade);
 printf ("%s \n", nome);
 if (idade <= 10) 
  printf ("R$30,00");
else if (idade > 10 && idade <= 29)
 printf ("R$60,00");
else if (idade > 29 && idade <= 45)
 printf ("R$120");
else if (idade > 45 && idade <=59)
 printf ("R$150,00");
else if (idade > 59 && idade <=65)
 printf ("R$250,00");
else 
 printf ("R$400,00 \n");
}

//18. Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês correspondente. Caso o usuário digite umnúmero fora desse intervalo, deverá aparecer uma mensagem informando que não existe mês com este número. Utilize o switch para este problema.
void questao18() {
 int num;

printf ("Digite um valor entre 1 e 12 \n");
scanf ("%d", &num);

switch (num){

case 1:
printf ("\n janeiro \n");
break;	

case 2:
printf ("\n fevereiro \n");
break;

case 3:
printf ("\n março \n");
break;

case 4:
printf ("\n abril \n");
break;

case 5:
printf ("\n maio \n");
break;

case 6:
printf ("\n junho \n");
break;

case 7:
printf ("\n julho \n");
break;

case 8:
printf ("\n agosto \n");
break;

case 9:
printf ("\n setembro \n");
break;

case 10:
printf ("\n outubro \n");
break;

case 11:
printf ("\n novembro \n");
break;

case 12:
printf ("\n dezembro \n");
break;

default:
 printf ("Opção invalida");  
 } 
}

//19. Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores para cada estado. Sabendo-se que os arqueiros de uma
//equipe não obtiveram o mesmo número de pontos, criar um programa que informe se uma equipe foi classificada, de acordo com a seguinte especificação:
//• Ler os pontos obtidos por cada jogador da equipe;
//• Mostrar esses valores em ordem decrescente;
//• Se a soma dos pontos for maior do que 100, imprimir a média aritmética entre eles, caso contrário, imprimir a mensagem "Equipe desclassificada".
void questao19() {
float n1, n2, n3, media, soma;
char equipe[50];

printf ("Informe o nome da equipe: \n");
scanf (" %50[^\n]", equipe);
printf ("Informe as tres notas:\n");
scanf ("%f %f %f", &n1, &n2, &n3);
soma = (n1+n2+n3);
media = (n1+n2+n3)/3;
if (n1>=n2 && n2>= n3)
 printf ("a equipe %s obteve as seguintes notas: %.2f %.2f %.2f \n", equipe, n3, n2, n1);
else if (n2 >= n1 && n1 >= n3)
 printf ("a equipe %s obteve as seguintes notas: %.2f %.2f %.2f \n", equipe, n3, n1, n2);
else if (n3 >= n1 && n1 >= n2)
 printf ("a equipe %s obteve as seguintes notas: %.2f %.2f %.2f \n", equipe, n2, n1, n3);
else if (n3 >= n2 && n2 >= n1)
 printf ("a equipe %s obteve as seguintes notas: %.2f %.2f %.2f \n", equipe, n1, n2, n3);
else if (n2 >= n3 && n3 >=n1)
 printf ("a equipe %s obteve as seguintes notas: %.2f %.2f %.2f \n", equipe, n1, n3, n2);
else
 printf ("a equipe %s obteve as seguintes notas: %.2f %.2f %.2f \n", equipe, n2, n3, n1);

if (soma > 100)
  printf ("Esta classificada com a media das notas de: %.2f \n", media);
else  
 printf ("Equipe Desclassificada \n");
}

//20. O banco XXX concederá um crédito especial com juros de 2% aos seus clientes de acordo com o saldomédio no último ano. 
//Faça um programa que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir.
// O programa deve imprimir uma mensagem informando o saldo médio e o valor de crédito.
//Saldo Médio Percentual
//de 0 a 500 nenhum crédito
//de 501 a 1000 30% do valor do saldo médio
//de 1001 a 3000 40% do valor do saldo médio
//acima de 3001 50% do valor do saldo médio

void questao20() {
 float saldomedio, credito;
 printf ("Informe seu saldo medio \n");
 scanf ("%f", &saldomedio);
 if (saldomedio >= 0 && saldomedio <= 500)
  credito = 0;
else if (saldomedio > 500 && saldomedio <= 1000)
 credito = saldomedio * 0.3;
else if (saldomedio > 1000 && saldomedio <= 3000)
 credito = saldomedio * 0.4;
else
 credito = saldomedio * 0.5;
 printf ("O credito para o seu saldo medio de: %.2f será de: %.2f \n", saldomedio, credito); 
}

//21. A biblioteca de uma Universidade deseja fazer um programa que leia o nome do livro que será emprestado,
// o tipo de usuário (professor ou aluno) e possa imprimir um recibo conforme mostrado a seguir. 
//Considerar que o professor tem dez dias para devolver o livro e o aluno só três dias.
//• Nome do livro:
//• Tipo de usuário:
//• Total de dias:
void questao21() {
	char nomelivro[50];
	int x;
	printf ("Informe o nome do livro: \n");
	printf ("Digite 666 - Professor ou 777 - Aluno \n ");
	scanf (" %50[^\n]", nomelivro);
	scanf ("%d", &x);
	if (x = 666)
	 printf ("Nome do livro: %s Professor então terá 10 dias para responder. \n", nomelivro);
	else if (x = 777)
	 printf ("Nome do livro: %s Aluno então terá 3 dias para responder. \n", nomelivro);
	else 
	 printf ("Valor invalido. \n");
}

//22. Construa um programa que leia o percurso em quilómetros, o tipo do carro e informe o consumo estimado de combustível, 
//sabendo-se que umcarro tipo A faz 12 km com um litro de gasolina, um tipo B faz 9 km e o tipo C, 8 km por litro.
void questao22() {
 char tipo;
 float km, lts;

printf ("Informe seu tipo de carro: A, B ou C: \n");
scanf (" %c", &tipo);
printf ("Informe a quantidade de KM's percorridos: \n");
scanf ("%f", &km);
if (tipo == 'A')
 lts = km/12.0;
 else if (tipo == 'B')
  lts = km/9.0;
  else 
   lts = km/8.0;
printf ("O consumo será: %.2f \n", lts);
}

//23. Crie um programa que informe a quantidade total de calorias de uma refeição a partir da escolha do usuário que deverá informar o prato, 
//a sobremesa, e bebida conforme a tabela a seguir.
//Prato Sobremesa Bebida
//Vegetariano 180cal Abacaxi 75cal Chá 20cal
//Peixe 230cal Sorvete diet 110cal Suco de laranja 70cal
//Frango 250cal Mousse diet 170cal Suco de melão 100cal
//Carne 350cal Mousse chocolate 200cal Refrigerante diet 65cal
void questao23() {
 int cal = 0, p = 0, op2 = 0, op3 = 0;

do {
 printf ("Informe o prato principal: 1- Vegetariano / 2- Peixe / 3- Frango / 4- Carne \n");
 scanf ("%d", &p);
  if (p == 1)
  cal += 180;
  else if  (p == 2)
   cal += 230;
  else if (p == 3)
   cal += 250;
  else if (p == 4) 
   cal += 350;
  else {
    printf ("Opção invalida!!\n");
	p = 0;
   }
}while (p == 0);

 do{
 printf ("Agora informe a Sobremesa: 1- Abacaxi / 2- Sorv. Diet / 3- Mousse de Chocolate / 4- Suco de laranja \n");
 scanf ("%d", &op2);

	if (op2 == 1)
     cal += 75;	
   	else if (op2 == 2)
     cal += 110;
	else if (op2 == 3)
	 cal += 170;
	else if (op2 == 4)
	 cal += 200;
	else {
	 printf ("Opção Invalida!!\n");
	 op2 = 0;	
	}
  }while (op2 == 0);
 
 do {
  printf ("Para bebida: 1- Chá / 2- Suco de laranja / 3- Suco de melão / 4- Refrigerante Diet \n");
  scanf  ("%d", &op3);
   if (op3 == 1)
    cal += 20;
   else if (op3 == 2)
    cal += 70;
   else if (op3 == 3)
    cal += 100;
   else if (op3 == 4)
    cal += 65;
   else {
	printf ("Opção Invalida !!\n");
	op3 = 0;
   }
 }while (op3 == 0);

printf ("O total em calorias consumido foi: %d \n", cal);

}

//24. A polícia rodoviária resolveu fazer cumprir a lei e vistoriar veículos para cobrar dosmotoristas o DUT. 
//Sabendo-se que o mês em que o emplacamento do carro deve ser renovado é determinado pelo último número da placa do mesmo, 
//faça um programa que, a partir da leitura da placa do carro, informe omês em que o emplacamento deve ser renovado.
void questao24() {

	char placa[10];
	printf ("Informe a placa do carro: \n");
    scanf (" %10[^\n]", placa);

	switch (placa[6]){

case '1':
printf ("\n O DOC deve ser renovado em janeiro \n");
break;	

case '2':
printf ("\n O DOC deve ser renovado em fevereiro \n");
break;

case '3':
printf ("\n O DOC deve ser renovado em março \n");
break;

case '4':
printf ("\n O DOC deve ser renovado em abril \n");
break;

case '5':
printf ("\n O DOC deve ser renovado em maio \n");
break;

case '6':
printf ("\n O DOC deve ser renovado em junho \n");
break;

case '7':
printf ("\n O DOC deve ser renovado em julho \n");
break;

case '8':
printf ("\n O DOC deve ser renovado em agosto \n");
break;

case '9':
printf ("\n O DOC deve ser renovado em setembro \n");
break;

case '0':
printf ("\n O DOC deve ser renovado em outubro \n");
break;

default:
 printf ("Opção invalida");  
 }
}

//25. A prefeitura contratou uma firma especializada para manter os níveis de poluição considerados ideais para umpaís do 1º mundo. 
//As indústrias, maiores responsáveis pela poluição, foram classificadas em três grupos.
// Sabendo-se que a escala utilizada varia de 0,05 e que o índice de poluição aceitável é até 0,25, 
//fazer um programa que possa imprimir intimações de acordo com o índice e a tabela a seguir:
//Índice Indústrias que receberão intimação
//0,3 1º gurpo
//0,4 1º e 2º grupos
//0,5 1º, 2º e 3º grupos
void questao25() {
	
	float i = 0;

	printf ("Informe o índice de poluição de sua industria: \n");
    scanf ("%f", &i );

    if (i>0 && i<=0.25)
	 printf ("Índice de poluição aceitavel!! \n");
	else if (i > 0 && i <= 0.3)
	 printf ("Pertencente ao 1° grupo!! \n");
	else if (i >= 0.4 && i < 0.5)
	 printf ("Pertencente ao 1° e 2° grupos !! \n");
	else 
	 printf ("Pertencente ao 1°, 2° e 3° grupos!! \n");
}

int main() {
	const char menu[1000] = "\n================================\n            PROGRAMAS\n================================\n[1]  - Adição\n[2]  - Adição 2\n[3]  - Múltiplo\n[4]  - Múltiplo 2\n[5]  - Múltiplo 3\n[6]  - Crédito\n[7]  - Intervalo\n[8]  - Menor/Maior\n[9]  - Idade\n[10] - Crescente\n[11] - Maior\n[12] - Idade 2\n[13] - Situação Aluno\n[14] - INSS\n[15] - Valor de Venda\n[16] - Natação\n[17] - Plano de Saúde\n[18] - Mês do Ano\n[19] - Arco e Flecha\n[20] - Crédito Especial\n[21] - Biblioteca\n[22] - Consumo Combustível\n[23] - Calorias\n[24] - Emplacamento\n[25] - Intimação\n================================\n";
	printf("%s",menu);
	int opcao;
	printf("Digite a questão a ser executada: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1:
			questao01();
			break;
		case 2:
			questao02();
			break;
		case 3:
			questao03();
			break;	
		case 4:
		    questao04();
			break;	
		case 5:
			questao05();
			break;	
		case 6:
			questao06();
			break;
		case 7:
			questao07();
			break;		
		case 8:
			questao08();
			break;							
		case 9:
			questao09();
			break;	
		case 10:
			questao10();
			break;	
		case 11:
			questao11();
			break;
		case 12:
			questao12();
			break;	
		case 13:
			questao13();
			break;	
		case 14:
			questao14();
			break;
		case 15:
			questao15();
			break;		
		case 16:
			questao16();
			break;		
		case 17:
			questao17();
			break;	
		case 18:
			questao18();
			break;
		case 19:
		 questao19();
			break;	
		case 20:
		 questao20();
			break;	
		case 21:
		 questao21();
			break;	
		case 22:
		 questao22();
			break;	
		case 23:
		 questao23();
			break;		
		case 24:
		 questao24();
			break;
        case 25:
		 questao25();
			break;

		default:
			printf("Opção inválida!");
	}
	
	return EXIT_SUCCESS;
}