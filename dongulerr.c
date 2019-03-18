#include <stdio.h>

int main()
{
   int x=0;

   while(x <= 10) //once kontrol et sonra yap
      {printf("%d\n",x++);}
    
    int sayi;

   do //once bi yap bakalım sonra kontrol ederiz
   {
      printf("Bir sayi girin : ");
      scanf("%d",&sayi);
      printf("iki kati       : %d\n",2*sayi);

   }while( sayi>0 );   /* koşul */

   puts("Döngü sona erdi.----\n---------------------\n");

   int i;

    for (i=0; i<16; i++)
      printf("%2d  %2o  %x  %X\n", i,i,i,i);

 return 0;
}