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
void j03 (){
 int num1 = 5; 
 int num2 = 8; 
 int num3 = 12;
 float med = (num1 + num2 + num3) / 3.0;
 printf (" media de %d %d %d = %2.f\n" , num1, num2, num3, med);     
}

//4. Faça um programa que leia e imprima um número inteiro.
void j04 (){
  int numero;  
  printf ("Informe um valor inteiro: \n");
  scanf ("%d", &numero);  
  printf("O valor informado foi: %d\n", numero);
}

//5. Faça um programa que leia dois números reais e os imprima.
void j05(){
  float num1, num2;
  printf ("Primeiro numero:\n" );
  scanf ("%f", &num1);
  printf ("Segundo numero:\n" );
  scanf ("%f", &num2);
  printf ("Os valores digitados são: %.2f %.2f \n", num1, num2);  
}
//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void j06 (){
 int valor, ant, suc;
 printf ("Informe um valor inteiro \n");
 scanf ("%d", &valor);
 ant = valor -1;
 suc = valor +1;
 printf ("Antecessor: %d Sucessor %d", ant, suc);  
}
//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void j07 (){
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
void j08(){
  int num1, num2;
  printf ("Informe dois valores inteiros: \n");
  scanf ("%d %d", &num1, &num2);
  printf("A subtração dos valores: %d %d é: %d\n", num1, num2, num1-num2);
  
}
//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.
void j09(){
 float num1, x;
 printf("Informe um valor real:\n");
 scanf ("%f", &num1);
 x = num1/4;
 printf ("1/4 do valor informado é: \n %.2f", x);
}
//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.

void j10 (){
 float num1, num2, num3, med;
 printf ("Informe tres valores reais: \n");
 scanf ("%f %f %f", &num1, &num2, &num3);
 med = (num1+num2+num3)/3;
 printf ("a média dos tres valores informados é: \n %.2f \n", med);
}
//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.

void j11 (){
 float num1, num2, div, adc, sub, mult;
 printf ("Informe dois valores reais: \n");
 scanf  ("%f %f", &num1, &num2);
 adc = num1+num2;
 sub = num1-num2;
 div = num1/num2;
 mult = num1*num2;
 printf ("A soma, subtração, divisão e a multiplicação entre os valores são respectivamente: \n %.2f %.2f %.2f %.2f \n", adc, sub, div, mult);
}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void j12 (){
  float num1, qd;
  printf ("informe um valor: \n");
  scanf ("%f", &num1);
  qd = num1 * num1;
  printf ("O quadrado do valor é: \n %.2f \n", qd); 
}
//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
void j13 (){
 float valor, reaj;
 printf ("Informe o valor em sua conta poupança: \n");
 scanf ("%f", &valor);
 reaj = valor * 1.02;
 printf("o valor reajustado é: \n %.2f", reaj); 
}

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base + altura) e a área (base * altura).
void j14 (){
 float b, alt, per, area;
 printf("Informe a base e a altura do retângulo: \n");
 scanf ("%f %f", &b, &alt);
 per = b+alt;
 area = b*alt;
 printf("O perimetro do retângulo é: \n %.2f: \n e sua área é: %.2f \n", per, area); 
}
//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.
void j15 (){
 float valor, pdc, valf, desc, vald;
 printf("informe o valor do produto e a porcentagem de desconto desejado: \n");
 scanf ("%f %f", &valor, &pdc);
 desc = pdc/100;
 vald = valor*desc;
 valf = valor - vald;
 printf ("O valor do desconto foi: \n %.2f \n e o valor final é: \n %2.f \n", vald, valf);
}
//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.
void j16 (){
 float sal, pdc, reaj, per;
 printf ("informe seu salario atual e o percentual de reajuste desejado: \n");
 scanf ("%f %f", &sal, &pdc);
 per = pdc/100;
 reaj = (sal * per) + sal;
 printf("O salario reajustado é: \n %.2f", reaj); 
}

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5
void j17 (){
  float c, f;
  printf ("Informe a temperatura em graus centígrados: \n ");
  scanf ("%f", &c);
  f = ((9 * c) +160) / 5;
  printf("a temperatura em Fahrenheit é:\n %.2f", f);
}
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
void j18 (){
  float d, l, t, vm;
  printf("Informe o tempo da viagem em horas e a velocidade media percorrida: \n");
  scanf ("%f %f,", &t, &vm);
  d = t*vm;
  l = d/12;
  printf ("A distancia percorrida em km foi: %.2f \n e a o consumo total foi de: %2.f \n", d, l);
}
//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.
void j19 (){
 float prest, taxa, per, tx, valorf, valord;
 printf("informe o valor da prestação em atraso: \n");
 scanf ("%f", &prest);
 printf ("Informe a taxa de juros e o periodo de atraso em dias: \n");
 scanf ("%f %f", &taxa, &per);
 tx = taxa/100;
 valord = prest * tx * per;
 valorf = valord + prest;
printf ("O valor da prestação: \n %.2f O periodo de atraso: \n %.2f O que sera cobrado pelo atraso: \n %.2f e o valor final com juros: \n %.2f", prest, per, valord, valorf);
}

  
//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main (){
 j19 ();

return EXIT_SUCCESS;
}