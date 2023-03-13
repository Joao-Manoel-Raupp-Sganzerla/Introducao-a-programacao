#include <stdio.h>

int dia, mes, tempo;

int main(void) {
  printf("insira uma data (dd/mm)\n");
  scanf("%i/%i", &dia,&mes);

if (mes > 12 || dia > 31){
  printf ("essa data não existe");
}
else {
tempo = ((mes-1)*31)+dia-1;

if (mes > 2) {tempo = tempo - 3;}
if (mes > 4) {tempo = tempo - 1;}
if (mes > 6) {tempo = tempo - 1;}
if (mes > 9) {tempo = tempo - 1;}
if (mes > 11) {tempo = tempo - 1;} 

  printf("dias passados desde o início do ano:%i", tempo);
}
}