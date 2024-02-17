#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void j01 (){
    printf("João do IF");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void j02 (){
 printf ("Resultado de 30 x 27 = %d", 30*27);   
}

//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void j03 () {
 printf ("Resultado: %d\n", 30*27);   
}
//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void j04 (){
 int num1 = 5; 
 int num2 = 8; 
 int num3 = 12;
 float med = (num1 + num2 + num3) / 3.0;
 printf (" media de %d %d %d = %2.f\n" , num1, num2, num3, med);     
}

//4. Faça um programa que leia e imprima um número inteiro.
void j05 (){
  int numero;  
  printf ("Informe um valor inteiro: \n");
  scanf ("%d", &numero);  
  printf("O valor informado foi: %d\n", numero);
}

//5. Faça um programa que leia dois números reais e os imprima.
void j06(){
  float num1, num2;
  printf ("Primeiro numero:\n" );
  scanf ("%f", &num1);
  printf ("Segundo numero:\n" );
  scanf ("%f", &num2);
  printf ("Os valores digitados são: %.2f %.2f \n", num1, num2);  
}
//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void j07 (){
 int valor, ant, suc;
 printf ("Informe um valor inteiro \n");
 scanf ("%d", &valor);
 ant = valor -1;
 suc = valor +1;
 printf ("Antecessor: %d Sucessor %d", ant, suc);  
}
//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void j08 (){
 char nome[50], endereco[70], telefone[14];   
 printf ("Nome:\n");
 scanf (" %50[^\n]",nome);
 printf ("Endereço:\n");
 scanf (" %70[^\n]",endereco);
 printf ("Telefone:\n");
 scanf (" %14[^\n]",telefone);  
 printf ("Nome: %s\n Endereço: %s\n Telefone: %s\n", nome, endereco, telefone); 
}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void j09(){
  int num1, num2;
  printf ("Informe dois valores inteiros: \n");
  scanf ("%d %d", &num1, &num2);
  printf("A subtração dos valores: %d %d é: %d\n", num1, num2, num1-num2);
  
}
//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base + altura) e a área (base * altura).

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível  
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.
  
//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main (){
 j09 ();

return EXIT_SUCCESS;
}