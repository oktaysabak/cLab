#include "stdio.h"
/*

Tip Karakteri	Anlamı	Yazdırılacak veri tipi
%c	tek bir karakter	char
%s	karakter dizisi (string)	char
%d	işaretli ondalık tamsayı	int, short
%ld	uzun işaretli ondalık tamsayı	long
%u	işaretsiz ondalık tamsayı	unsigned int, unsigned short
%lu	işaretsiz uzun tamsayı	unsigned long
%f	Gerçel sayı	float
%lf	Çift duyarlı gerçel sayı	double


*/

int main(int argc, char const *argv[])
{
    int   a = 2,    b = 10,   c = 50;
   float f = 1.05, g = 25.5, h = -0.1, yuzde;

    printf("3 tamsayi       : %d %d %d\n", a, b, c);
    printf("3 tamsayi [TAB] : %d \t%d \t%d\n", a, b, c);

    printf("\n");

    printf("3 reel sayi (yanyana) : %f %f %f\n", f, g, h);
    printf("3 reel sayi (altalta) : \n%f\n%f\n%f\n\n", f, g, h);

    yuzde = 220 * 25/100.0;
    printf("220 nin %%25 i %f dir\n", yuzde);
    printf("%f/%f isleminin sonucu = %f\n", g, f, g / f);

    printf("\nprogram sonunda beep sesi cikar...\a\n");


    int karSay;
    int sayi = 1234;

    karSay = printf("Ugurlu sayim = %d\n",sayi);

    printf("Ust satirda karakter sayisi: %d dir\n", karSay);
    // KLAVYEDEN GİRDİ ALMA

    scanf("%d", &sayi);

    printf("\nsayi: %d", sayi);
    return 0;
}
