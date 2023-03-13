//Exercício 3 - João Manoel Raupp Sganzerla
#include <stdio.h>

float b, salario;
int d, c, a, acrescimo;

int main(void) {
  printf("insira o salário base do funcionário\n");
  scanf ("%f", &b);
  printf("insira o número de dependentes do funcionário\n");
  scanf ("%i", &d);
  printf("insira o número de anos de casa do funcionário\n");
  scanf ("%i", &c);
  printf("insira o ano atual\n");
  scanf ("%i", &a);

  if (d >= 3){
    acrescimo = acrescimo + 9;
  }
  else{
    acrescimo = acrescimo + 3*d;
  } 

  if (d < 3){
    if (c/6 > 5){
    acrescimo = acrescimo + 20;
    }
    else{
      acrescimo = acrescimo + 4*(c/6);
    } 
  }
  else {
   if (c/8 > 4){
    acrescimo = acrescimo + 36;
   }
    else{
      acrescimo = acrescimo + 8*(c/6);
    } 
  }
  
  if (a%4 == 0){
   if (a%100 == 0){
    if (a%400 == 0){
    acrescimo = acrescimo + 1;
  }}
  else {
    acrescimo = acrescimo + 1;
  }}
  
  salario = b + (b*acrescimo/100);

  printf ("Salário final: R$%.2f", salario);
  }

  