#include <stdio.h>

int dia, mes, hora, minuto, segundo, tempo1,tempo2, brat, mazel, salek, tak, blip;

int main(void) {
  printf("insira a data (dd/mm/h/min/sec)\n");
  scanf ("%i/%i/%i/%i/%i", &dia, &mes, &hora, &minuto, &segundo);

  tempo1 = ((mes-1)*31)+dia;

  if (mes > 2) {tempo1 = tempo1 - 3;}
  if (mes > 4) {tempo1 = tempo1 - 1;}
  if (mes > 6) {tempo1 = tempo1 - 1;}
  if (mes > 9) {tempo1 = tempo1 - 1;}
  if (mes > 11) {tempo1 = tempo1 - 1;} 

  tempo2 = segundo + (minuto*60) + (hora*3600) + (tempo1*86400);
  
  // blip = 3 segundos
  // tak = 40 blips = 120 segundos
  // salek = 15 taks = 1800 segundos
  // mazel = 30 saleks = 54000 segundos
  // brat = 8 mazel = 432000 segundos

  brat = tempo2/432000;
  tempo2 = tempo2%432000;
  
  mazel = tempo2/54000;
   tempo2 = tempo2%54000;
  
  salek = tempo2/1800;
   tempo2 = tempo2%1800;

  tak = tempo2/120;
   tempo2 = tempo2%120;

  blip = tempo2/3;
   tempo2 = tempo2%3;

   printf ("Data termopolita (brat/mazel/salek/tak/blip)\n (%i/%i/%i/%i/%i)", brat, mazel, salek, tak ,blip );
}