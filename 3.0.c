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
 }

 printf ("a soma dos números entre %i e %i é %i", a, b, soma);
}