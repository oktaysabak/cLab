#include "stdio.h"
/*
- .h dosyalarını include etmeyi unutma
- sabitlerin butun harfleri buyuk yazılır: #define PI 3.14 ya da const int STATUS = 0x0465
- 

*/

//merhaba dediğimiz fonksiyon
void merhaba();

//ana fonksiyon
int main() {
    merhaba();
    printf("hello oktay\n");
    return 0;
}

void merhaba() {

    printf("merhaba\n");
    }