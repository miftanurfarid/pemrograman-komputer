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
    int a, b, c, i, j, k, n;

    printf("Masukkan integer: ");
    scanf("%d", &n);

    for (i = n; i > 0; i--)
    {
        for ( j = 1; j < i; j++)
            printf (" ");
        for ( k = j - 1; k < n; k++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }

    for ( a = n - 1; a < n && a != -1; a--)
    {
        for (b = n; b > a; b--)
        {
            printf(" ");
        }
        for (c = 0; c < a; c++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
}
