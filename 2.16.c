#include <stdio.h>

int dia1, mes1, tempo1, dia2, mes2, tempo2, diferença;

int main(void) {
  printf("insira uma data\n");
  scanf("%i/%i", &dia1,&mes1);
  printf("insira outra data\n");
  scanf("%i/%i", &dia2,&mes2);

if (mes1 > 12 || dia1 > 31 || mes2 > 12 || dia2 > 31){
  printf ("essa data não existe");
}
else {
tempo1 = ((mes1-1)*31)+dia1;
tempo2 = ((mes2-1)*31)+dia2;

if (mes1 > 2) {tempo1 = tempo1 - 3;}
if (mes1 > 4) {tempo1 = tempo1 - 1;}
if (mes1 > 6) {tempo1 = tempo1 - 1;}
if (mes1 > 9) {tempo1 = tempo1 - 1;}
if (mes1 > 11) {tempo1 = tempo1 - 1;} 

if (mes2 > 2) {tempo2 = tempo2 - 3;}
if (mes2 > 4) {tempo2 = tempo2 - 1;}
if (mes2 > 6) {tempo2 = tempo2 - 1;}
if (mes2 > 9) {tempo2 = tempo2 - 1;}
if (mes2 > 11) {tempo2 = tempo2 - 1;} 

if (tempo1>tempo2){
  diferença = tempo1 - tempo2;
}
else {diferença = tempo2 - tempo1;}

  printf("diferença entre as duas data:%i dias", diferença);
}
}