#include <stdio.h>

int a, b;

int main(void) {
  printf("insira dois números\n");
  scanf ("%i %i", &a, &b);

  int i = a;
  int soma = 0;

 while (i <= b) {
  soma = soma + i;
  i++;
  if (i%7 == 0){
    soma = soma - i;
  }
 }

 printf ("a soma dos números, não multiplos de 7, entre %i e %i é %i", a, b, soma);
}