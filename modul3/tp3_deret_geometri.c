/*
 * tp3_deret_geometri.c:
 *
 * Tugas Pendahuluan
 * Modul 3
 *
 * 12/04/2016 10:34:10 PM
 * mifta nur farid, miftanurfarid@gmail.com
 * https://github.com/miftanurfarid/
 *
 * Institut Teknologi Sepuluh Nopember
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
    int i = 1, angka, deret;
    do
    {
        printf("Masukkan angka integer positif: ");
        scanf("%d", &angka);
    }
    while (angka <= 0);


    printf("Deret geometrinya adalah: ");

    do
    {
        deret =  3 * pow(3,(i - 1)) ;
        printf("%d ", deret);
        i++;
    }
    while (i <= angka);

    printf(".\n");

}
