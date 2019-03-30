#include "stdio.h"
#include "stdarg.h"

int topla(int, ...);
//bak bu makro fonksiyon cok guzelmis 
#define buyuk(a,b) ( (a>b) ? a:b)

int sum(int,int);
void say_hi();
//argc = arguman sayısı, *argv = argumanlar, 0. her zaman kendi adı :))
int main(int argc, char const *argv[])
{
    printf("arguman 1 %s \n", argv[1]);
    int toplam, x, y, en_buyuk;
    printf("iki sayı girelim: ");
    scanf("%d %d", &x, &y);
    say_hi();
    toplam = sum(x,y);
    en_buyuk = buyuk(25,24);
    printf("en buyuk:: %d\n", en_buyuk);
    printf("toplam %d\n", toplam);
printf("*-------------------*-------------------*\n");
    printf("|   topla(2, 11,22)             = %d    |\n", topla(2, 11,22));
    printf("|   topla(3, 11,22,33)          = %d    |\n", topla(3, 11,22,33));
    printf("|   topla(4, 11,22,33,44)       = %d   |\n", topla(4, 11,22,33,44));
    printf("|   topla(5, 11,22,33,44,55)    = %d   |\n", topla(5, 11,22,33,44,55));
    printf("|   topla(6, 11,22,33,44,55,66) = %d   |\n", topla(6, 11,22,33,44,66,66));
printf("*-------------------*-------------------*\n");
    return 0;
}
void say_hi() {
    printf("hiii :) \n");
}
int sum(int a, int b) {
    return a+b;
}
int topla(int n, ...) { //... sonrasında bi sürü gelebilir demek
    va_list ap; //gelenlere isim ver gibi bişey, yer ayırıyo aslında
    int i, top=0;
    va_start(ap,n); //n sayısı kadar yer ayır
    for(i=1;i<=n;i++) {
        top += va_arg(ap, int); //var_arg ile tek tek alıyor diyelimmmmmm
    }
    va_end(ap);  //bellektekileri boşalt
    return top;
}