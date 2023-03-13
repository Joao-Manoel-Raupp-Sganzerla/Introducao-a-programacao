#include <stdio.h>

float nota1, nota2, nota3, nota4, nota5, nota6, nota7, nota8, alta, baixa, media;

int main(void) {
  printf ("insira as oito notas\n");
  scanf ("%f %f %f %f %f %f %f %f", &nota1, &nota2, &nota3, &nota4, &nota5, &nota6, &nota7, &nota8);
  
  alta = nota1;
  baixa = nota1;

  if (alta < nota2){
    alta = nota2;
  }
  if (alta < nota3){
    alta = nota3;
  }
  if (alta < nota4){
    alta = nota4;
  }
  if (alta < nota5){
    alta = nota5;
  }
  if (alta < nota6){
    alta = nota6;
  }
  if (alta < nota7){
    alta = nota7;
  }
  if (alta < nota8){
    alta = nota8;
  } 
  if (baixa > nota2){
    baixa = nota2;
  }
  if (baixa > nota3){
    baixa = nota3;
  }
  if (baixa > nota4){
    baixa = nota4;
  }
  if (baixa > nota5){
    baixa = nota5;
  }
  if (baixa > nota6){
    baixa = nota6;
  }
  if (baixa > nota7){
    baixa = nota7;
  }
  if (baixa > nota8){
    baixa = nota8;
  }
  
  media = (nota1 + nota2 + nota3 + nota4 + nota5 + nota6 + nota7 + nota8 - alta - baixa)/6;
  printf ("Nota Final: %.1f", media);

}
  