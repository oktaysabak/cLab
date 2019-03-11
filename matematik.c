#include "stdio.h"
#include "math.h"
/*
int abs(int x);	x tamsayısının mutlak değerini hesaplar	abs(-4)	4
double fabs(double x);	x gerçel sayısının mutlak değerini hesaplar	fabs(-4.0)	4.000000
int floor(double x);	x'e (x'den büyük olmayan) en yakın tamsayıyı gönderir	floor(-2.7)	-3
int ceil(double x);	x'e (x'den küçük olmayan) en yakın tamsayıyı gönderir	ceil(-2.7)	-2
double sqrt(double x);	pozitif x sayısının karekökünü hesaplar	sqrt(4.0)	2.000000
double pow(double x, double y);	xy değerini hesaplar	pow(2., 3.)	8.000000
double log(double x);	pozitif x sayısının doğal logaritmasını hesaplar, ln(x)	log(4.0)	1.386294
double log10(double x);	pozitif x sayısının 10 tabanındaki logaritmasını hesaplar	log10(4.0)	0.602060
double sin(double x);	radyan cinsinden girilien x sayısının sinüs değerini hesaplar	sin(3.14)	0.001593
double cos(double x);	radyan cinsinden girilien x sayısının kosinüs değerini hesaplar	cos(3.14)	-0.999999
double tan(double x);	radyan cinsinden girilien x sayısının tanjant değerini hesaplar	tan(3.14)	-0.001593
double asin(double x);	sinüs değeri x olan açıyı gönderir. Açı -pi/2 ile pi/2 arasındadır	asin(0.5)	0.523599
double acos(double x);	cosinüs değeri x olan açıyı gönderir. Açı -pi/2 ile pi/2 arasındadır	acos(0.5)	1.047198
double atan(double x);	tanjant değeri x olan açıyı gönderir. Açı -pi/2 ile pi/2 arasındadır	atan(0.5)	0.463648
 	 	 	 
M_PI	Değeri 3.14159265358979323846 olan ön tanımlı sembolik sabit	 	 
M_E	Değeri 2.7182818284590452354 olan ön tanımlı sembolik sabit
*/
#define PI      3.141593
int main(int argc, char const *argv[])
{
    double aci = 30.0;

   aci *= PI/180.0;    /* radyana çevir */

   puts("30 derecenin");
   printf("sinusu    : %lf\n", sin(aci));
   printf("kosinusu  : %lf\n", cos(aci));
   printf("tanjanti  : %lf\n", tan(aci));
   printf("kotanjanti: %lf\n", 1.0/tan(aci));
    return 0;
}
