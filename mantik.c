#include "stdio.h"
#include "math.h"
int main () {
    float a, b, c, delta, x1, x2, x, kok_delta;
    printf("a, b, c degerlerini girin:\n");
    scanf("%f %f %f",&a,&b,&c);

    delta = b*b - 4.0*a*c;

    if( delta > 0.0 ){
       x1 = ( -b + sqrt(delta) )/( 2.0*a );
       x2 = ( -b - sqrt(delta) )/( 2.0*a );

       printf("\nReel kokler:");
       printf("\nx1 = %f",x1);
       printf("\nx2 = %f",x2);
    } 
    else if( delta < 0.0 ){
       kok_delta = ( sqrt(-delta) ) / (2.0*a);
       x = -0.5*b/a;

       printf("\nKarmasik kokler:");
       printf("\nx1 = %f + (%f)i", x, kok_delta);
       printf("\nx2 = %f - (%f)i", x, kok_delta);
    }
    else{
       x = -0.5*b/a;

       printf("\nKokler eşit:");
       printf("\nx1 = x2 = %f",x);
    }
    char kr;


    printf("Lutfen bir karakter girin\n");

     kr = getchar(); /* tek bir karakterin okunması */

     switch (kr)
     {
       case 'a':
          printf("a harfine bastiniz\n");
          break;
       case 'b':
          printf("b harfine bastiniz\n");
          break;
       default:
          printf("a veya b ye basmadiniz\n");
          break;
     }

     float xx, yy, zz;

    printf("xx: "); scanf("%f",&xx);
    printf("yy : "); scanf("%f",&yy);

      if(yy)                        /* y, 0'dan farklı mı? */
        zz = ( yy > xx ) ? xx/yy : xx*yy; /* y>x ise z = x/y, değilse z = x*y  */
      else
        zz = 0.0;

    printf("z = %f\n",zz);
  return 0;
}