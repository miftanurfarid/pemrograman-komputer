/*
 * tp3_deret_artimatika.c:
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

int main(void)
{
    int i = 1, angka, deret;
    do
    {
        printf("Masukkan angka integer positif: ");
        scanf("%d", &angka);
    }
    while (angka <= 0);


    printf("Deret aritmatikanya adalah: ");

    do
    {
        deret = 3 + (i-1)*2;
        printf("%d ", deret);
        i++;
    }
    while (i <= angka);

    printf(".\n");

}
