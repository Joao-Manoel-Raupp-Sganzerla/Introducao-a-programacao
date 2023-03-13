#include <stdio.h>

int main(void) {
  int a, b;
  
  printf("Entre com a e b: ");
  scanf( "%d %d", &a, &b );
  
  int i = a;
  int soma = 0;
    
  while ( i <= b ) {
     soma = soma + i;
     i = i + 1;
  }
       
  printf("Soma = %d\n", soma);
  
}
