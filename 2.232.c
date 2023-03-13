#include <stdio.h>

int dia, mes, hora, minuto, segundo, brat, mazel, salek, tak, blip;

int main(void) {
  printf("insira a data termopolita (brat/mazel/salek/tak/blip)\n");
  scanf ("%i/%i/%i/%i/%i", &brat, &mazel, &salek, &tak, &blip);

  segundo = blip*3 + tak*120 + salek*1800 + mazel*54000 + brat*432000;

  dia = segundo / 86400;
  segundo = segundo % 86400;
  
  mes = 1;

  if (dia > 31) {mes++; dia = dia - 31;}
  if (dia > 28) {mes++; dia = dia - 28;}
  if (dia > 31) {mes++; dia = dia - 31;}
  if (dia > 30) {mes++; dia = dia - 30;}
  if (dia > 31) {mes++; dia = dia - 31;}
  if (dia > 30) {mes++; dia = dia - 30;}
  if (dia > 31) {mes++; dia = dia - 31;}
  if (dia > 31) {mes++; dia = dia - 31;}
  if (dia > 30) {mes++; dia = dia - 30;}
  if (dia > 31) {mes++; dia = dia - 31;}
  if (dia > 30) {mes++; dia = dia - 30;}
  if (dia > 31) {mes++; dia = dia - 31;}

  hora = segundo/3600;
  segundo = segundo%3600;

  minuto = segundo/60;
  segundo = segundo%60;

  printf("data humana (dd/mm/h/min/sec)\n (%i/%i/%i/%i/%i)", dia, mes, hora, minuto, segundo);
}



