//Exercício 1 - João Manoel Raupp Sganzerla
#include <stdio.h>

float nota1, nota2, nota3, nota4, nota5, nota6, baixa1, baixa2, media;

int main(void) {
  printf ("insira as seis notas\n");
  scanf ("%f %f %f %f %f %f", &nota1, &nota2, &nota3, &nota4, &nota5, &nota6);
  
  baixa1 = nota1;
  baixa2 = nota1;

  if (baixa1 > nota2){
    baixa1 = nota2;
  }
  if (baixa1 > nota3){
    baixa1 = nota3;
  }
  if (baixa1 > nota4){
    baixa1 = nota4;
  }
  if (baixa1 > nota5){
    baixa1 = nota5;
  }
  if (baixa1 > nota6){
    baixa1 = nota6;
  }
  if (baixa2 > nota2 && nota2 > baixa1){
    baixa2 = nota2;
  }
  if (baixa2 > nota3 && nota3 > baixa1){
    baixa2 = nota3;
  }
  if (baixa2 > nota4 && nota4 > baixa1){
    baixa2 = nota4;
  }
  if (baixa2 > nota5 && nota5 > baixa1){
    baixa2 = nota5;
  }
  if (baixa2 > nota6 && nota6 > baixa1){
    baixa2 = nota6;
  }
  
  media = (nota1 + nota2 + nota3 + nota4 + nota5 + nota6 - baixa1 - baixa2)/4;
  printf ("Nota Final: %.1f", media);

}
  