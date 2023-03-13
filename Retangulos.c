#include <stdio.h>

int main() {

   int x1, y1, x2, y2, x3, y3, x4, y4;
   
   printf("Entre com as coordenadas do primeiro retangulo: " );
   scanf( "%d %d %d %d", &x1, &y1, &x2, &y2 );
   printf("Entre com as coordenadas do segundo retangulo: " );
   scanf( "%d %d %d %d", &x3, &y3, &x4, &y4 );

   if ( x2 <= x3 || x4 <= x1 || y3 <= y2 || y1 <= y4 ) 
     printf( "Eles nao tem intersecção!\n" );
   else {
     printf( "Eles tem intersecção!\n" );
     // px = max(x1,x3) 
     int px = x1; if ( x3 > px ) px = x3;
     // py = min(y1,y3) 
     int py = y1; if ( y3 < py ) py = y3;
     // qx = min(x2,x4) 
     int qx = x2; if ( x4 < qx ) qx = x4;
     // qy = max(y2,y4) 
     int qy = y2; if ( y4 > qy ) qy = y4;
     printf( "E a área é %d!\n", (px-qx)*(py-qy) );
   }
}
