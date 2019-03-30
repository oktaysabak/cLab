#include "stdio.h"

#define dizi_boyutu 10 //bu sekilde tanımlamak daha mantıklı gibi
int main(int argc, char const *argv[])
{   
    //veri_tipi dizi_adı[eleman_sayisi]; şeklimnde tanımlanır...
    int sarkilar[dizi_boyutu];
    float ortalamalar[dizi_boyutu], ortalama, toplam = 0.0;
    printf("10 elemanlı bir dizinin kapladıgı alan:: %d bayt\n", sizeof(sarkilar));
    
    for(int i=0;i<dizi_boyutu;i++) {
        printf("%d. sayiyi girin: ", i+1);
        scanf("%f",&ortalamalar[i]);

        toplam += ortalamalar[i];
    }
    ortalama = toplam/dizi_boyutu;

    printf("dizideki elemanların ortalaması: %f\n", ortalama);


    int   a[10] = {100, -250, 400, 125 ,550, 900, 689, 450, 347, 700}; //bu da bi tanımlama
   int   k, eb;

   /* ilk eleman en büyük kabul ediliyor */
   eb = a[0]; 

   for(k=1; k<10; k++)
      if( a[k]>eb ) eb = a[k];

   printf("En buyuk eleman = %d\n",eb);
    return 0;
}
