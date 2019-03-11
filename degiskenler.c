#include <stdio.h>
/*
char 
int /32 bit
double
float

bellekte kaplayacağı alan değiştirmek için
short     //16 bit integer
long     //64 bit integer 
unsigned int //sıfır ve sıfırdan buyuk integer

Alt sınır = (-2 üzeri 8*sizeof(tip))
Üst sınır = (2 üzeri 8*sizeof(tip))-1

1 bayt 8 bit
*/
//şimdi sizeof ile boyutları öğreneceğiz
const float PI= 3.142857;
const double NO= 123;

#define DATA 0x0255
#define R 15.16
int main(int argc, char const *argv[])
{
    printf("char            :   %d bayt\n", sizeof(char));
    printf("short           :   %d bayt\n", sizeof(short));
    printf("int             :   %d bayt\n", sizeof(int));
    printf("float           :   %d bayt\n", sizeof(float));
    printf("double          :   %d bayt\n", sizeof(double));
    printf("long            :   %d bayt\n", sizeof(long));
    printf("unsigned char   :   %d bayt\n", sizeof(unsigned char));
    printf("unsigned short  :   %d bayt\n", sizeof(unsigned short));
    printf("unsigned int    :   %d bayt\n", sizeof(unsigned int));
    printf("unsigned long   :   %d bayt\n", sizeof(unsigned long));
    printf("long double     :   %d bayt\n", sizeof(long double));
    /*
    BUNLAR DEĞİŞKEN ADI OLAMAZ
    auto       double   int        struct 
    break      else     long       switch
    case       enum     register   typedef
    char       extern   return     union
    const      float    short      unsigned
    continue   for      signed     void
    default    goto     sizeof     volatile
    do         if       static     while
        */
   

    char karakter = 'O', karakter_2;
    int sayi=0, sayi2;
    float toplam=0, carpim;
    /*
    C dilinde bütün tamsayı sabitler varsayılan (default) olarak int tipinde, gerçel sayı sabitler varsayılan olarak double tipindedir. Ancak sabitleri gösteren rakamların sonuna eklenecek U (veya u), L (veya l) ve F (veya f) harfleri ile bu durum değiştirilebilir. Bu yüzden, aşağıdaki atamalar aynı anlamda değildir.

    i = 25;    int           rakam 
    i = 25U;   unsigned int  rakam
    i = 25L;   long int      rakam
    i = 25UL;  unsigned long rakam
    i = 25L;   long int      rakam

    r = 17.2;  double        rakam
    r = 17.2L; long double   rakam
    r = 17.2F; float         rakam
Tamsayı (int) rakamsal bilgiler, 8 (oktal) ve 16 (hexadesimal) sayı tabanında da gösterilebilir. Bunun için sabit rakamın başına, 8 tabanı için 0 (sıfır) ve 16 tabanını için 0x sembolleri eklenir. 16'lık sistemdeki hafler büyük (A, B, C, D, E ve F) veya küçük (a, b, c ,d, e ve f) olabilir. Buna gösterime göre, aşağıdaki atmalar aynı anlamadadır:

    i = 75;    i = 75, 10 tabanında
    i = 0113;  i = 75,  8 tabanında
    i = 0x4b;  i = 75, 16 tabanında
    i = 0x4B;  i = 75, 16 tabanında
Gerçel sayılar ondalıklı veya üstel olmak üzere iki biçimde gösterilebilir. Örneğin 123.456 sayısının aynı anlama gelen dört farklı gösterimi aşağıda verilmiştir. Üstel gösterimde, 1.23456e+2 veya 1.23456E+2 sayısı matematikteki 1.23456 x 102 gösterimi ile eşdeğerdir.

    x = 123.456;      ondalıklı gösterimi
    x = 123.456e+0;   üstel gösterim
    x = 1.23456e+2;   üstel gösterim
    x = 1234.56E-1;   üstel gösterim
Karakter sabitler, bir harf için tek tırnak, birden çok karakter için çift tırnak içinde belirtilirler.

    'A'               bir karakter
    "Merhaba Dunya"   bir karakter kümesi
    
   */
  const int MAX = 100;
  char   c = 'a';
  char  *s = "Bu bir sicim";
  int    i = 22;
  float  f = 33.3;
  double d = 44.4;
 
  printf("PI = %lf\n",PI);
  printf("MAX= %d\n", MAX);
  printf("c  = %c\n", c);
  printf("s  = %s\n", s);
  printf("i  = %d\n", i);
  printf("f  = %f\n", f);
  printf("d  = %lf\n",d);

    
    return 0;
}

