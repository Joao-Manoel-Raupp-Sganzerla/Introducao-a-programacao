#include <stdio.h>
#include <math.h>

int main() {
   int x1, y1, r1;
   int x2, y2, r2, d;
  
   printf("Primeiro circulo: "); scanf("%d %d %d", &x1, &y1, &r1 );
   printf("Segundo circulo: ");  scanf("%d %d %d", &x2, &y2, &r2 );
  
   d = pow(x1-x2,2) + pow(y1-y2,2);
  
   if(sqrt(d) > r1+r2 || sqrt(d) < r1-r2)
      printf("Não tem intersecção\n");
     else
      printf("Tem intersecção\n");
    
}