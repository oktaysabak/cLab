#include "stdio.h"


/*
+	toplama	x + y	x ve y nin toplamı
-	çıkarma	x - y	x ve y nin farkı
*	carpma	x * y	x ve y nin çarpımı
/	bölme	x / y	x ve y nin oranı
%	artık bölme	x % y	x / y den kalan sayı


*/
int main(int argc, char const *argv[])
{
    int a, b;
    a= 5;
    b= 7;

    printf("a= %d ve b = %d, olarak veriliyor. \n", a,b);

    int toplam = a+b;
    printf("a<-a+b atamasının sonucu a=%d dir\n", toplam);

    //a= 5;
    a += b;
    printf("a += b atamasının sonucu: a=%d dir\n", a);
    return 0;
}
