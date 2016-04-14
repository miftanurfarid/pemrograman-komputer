/*
 * tp1.c:
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
    int i, j, n, bintang = 0, nol = 0;

    printf("Masukkan jumlah baris: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == 0 || i == (n - 1) || i == j || j == 0 || j == ( n - 1))
                {
                    printf("*");
                    bintang++;
                }

            else
            {
                printf("0");
                nol++;
            }
        }
        printf("\n");
    }

    printf("Jumlah nol = %d\n", nol);
    printf("Jumlah Bintang = %d\n", bintang);
}
