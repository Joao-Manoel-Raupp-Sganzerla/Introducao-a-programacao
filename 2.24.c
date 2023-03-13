#include <stdio.h>

int dia, mes, tempo, dia2, mes2, decada;

int main(void) {
  printf("insira uma data (dd/mm)\n");
  scanf("%i/%i", &dia,&mes);

if (mes > 12 || dia > 31){
  printf ("essa data não existe");
}
else {
tempo = ((mes-1)*31)+dia;

if (mes > 2) {tempo = tempo - 3;}
if (mes > 4) {tempo = tempo - 1;}
if (mes > 6) {tempo = tempo - 1;}
if (mes > 9) {tempo = tempo - 1;}
if (mes > 11) {tempo = tempo - 1;} 

  mes2 = tempo/30;
  dia2 = tempo%30;
  decada = 1;

  if (dia2 >= 11) {decada++;}
  if (dia2 >= 21) {decada++;}

  dia2 = dia2 - (decada-1)*10;

  if (mes2 == 12 && dia2 >= 1 ) {
    if (dia2 == 1){
      printf ("Dia da Virtude");
    }
     if (dia2 == 2){
      printf ("Dia do Gênio");
    }
     if (dia2 == 3){
      printf ("Dia do Trabalho");
    }
     if (dia2 == 4){
      printf ("Dia da Razão");
    }
     if (dia2 == 5){
      printf ("Dia da Recompensa");
    }
     if (dia2 == 6){
      printf ("Dia da Revolução");
    }
  }
  else {
    
    if (mes2 == 1){
      printf("dia %i, da década %i, do mês Vendémiaire (%i)", dia2, decada, mes2);
    }
    if (mes2 == 2){
      printf("dia %i, da década %i, do mês Brumaire (%i)", dia2, decada, mes2);
    }
    if (mes2 == 3){
      printf("dia %i, da década %i, do mês Frimaire (%i)", dia2, decada, mes2);
    }
    if (mes2 == 4){
      printf("dia %i, da década %i, do mês Nivôse (%i)", dia2, decada, mes2);
    }
    if (mes2 == 5){
      printf("dia %i, da década %i, do mês Pluviôse (%i)", dia2, decada, mes2);
    }
    if (mes2 == 6){
      printf("dia %i, da década %i, do mês Ventôse (%i)", dia2, decada, mes2);
    }
    if (mes2 == 7){
      printf("dia %i, da década %i, do mês Germina (%i)", dia2, decada, mes2);
    }
    if (mes2 == 8){
      printf("dia %i, da década %i, do mês Floréal (%i)", dia2, decada, mes2);
    }
    if (mes2 == 9){
      printf("dia %i, da década %i, do mês Prairial (%i)", dia2, decada, mes2);
    }
    if (mes2 == 10){
      printf("dia %i, da década %i, do mês Messidor  (%i)", dia2, decada, mes2);
    }
    if (mes2 == 11){
      printf("dia %i, da década %i, do mês Thermidor (%i)", dia2, decada, mes2);
    }
    if (mes2 == 12){
      printf("dia %i, da década %i, do mês Frutidor (%i)", dia2, decada, mes2);
    }
    if (dia == 10){
      printf ("\nDia de descanso");
    }
  }
}
}