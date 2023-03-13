#include <stdio.h>

int ano;

int main(void) {
  printf("insira o ano\n");
  scanf ("%i", &ano);

  if (ano%4 == 0){
  if (ano%100 == 0){
  if (ano%400 == 0){
    printf ("esse ano é bissexto");
  }
  else{
    printf ("esse ano não é bissexto");
  }
  }
  else {
    printf ("esse ano é bissexto");
  }
  }
  else {
    printf ("esse ano não é bissexto");
  }
}