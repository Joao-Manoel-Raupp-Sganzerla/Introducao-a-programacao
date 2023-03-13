//Exercício 2 - João Manoel Raupp Sganzerla
#include <stdio.h>

float nota1, nota2, nota3, nota4, media; 

int main(void) {
  printf ("insira as quatro notas\n");
  scanf ("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

  media = (nota1 + nota2 + nota3 + nota4)/4;
   if (nota4 == 0){
    if (media >= 7){
      printf ("Você já está passado com média %.1f, mas ainda falta um trabalho", media);
    }
    else{
       float media7;
       media7 = 28 - (nota1 + nota2 + nota3);
       printf ("nota necessária para média 7: %.1f", media7);
   }}
   else{
     printf("sua média é %.1f", media );
   }
}