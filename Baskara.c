#include <stdio.h>
#include <math.h>

int main() {
  int a, b, c;
  
  printf("Entre a, b, c:");
  scanf("%d %d %d", &a, &b, &c );
  
  float delta = b * b - 4 * a * c;
  
  if ( delta > 0 ) {   // Duas respostas
    float raiz = sqrt( delta );
//  x = ( -b +- raiz ) / 2a
    float x1 = ( - b + raiz ) / ( 2 * a );
    float x2 = ( - b - raiz ) / ( 2 * a );
    printf("Soluções %f e %f\n", x1, x2 );
  }
  
  if ( delta == 0 ) {  // Uma resposta
    float x = ( - b ) / ( 2.0 * a );
    printf("Solução %f\n", x );
  }
  
  if ( delta < 0 ) {
   printf("Não tem solução real\n");
  }
}
