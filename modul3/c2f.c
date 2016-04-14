// c2f.c : program merubah celcius ke fahrenheit
#include <stdio.h>
int main(void)
{
    // meminta input user dalam Celcius
    float c;
    printf("Masukkan temperature dalam Celcius: ");
    scanf("%f", &c);
    
    // merubah ke fahrenheit
    float f = (9 / 5.0 * c) + 32;
    
    // menampilkan hasil
    printf("%.1f C = %.1f F\n", c, f);
    
    return 0;
}
