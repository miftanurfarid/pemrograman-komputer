/*
 * tp2.c:
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
    int durian = 10000, n_durian;
    int mangga = 5000, n_mangga;
    int pisang = 2000, n_pisang;
    int pepaya = 4000, n_pepaya;
    int setor, kembalian, total;


    printf("=====================================\n");
    printf("Selamat datang di pasar vibrastic\n");
    printf("Selamat berbelanja\n");
    printf("=====================================\n");
    printf("Daftar Harga: \n");
    printf("Durian = Rp %d,- \n",durian);
    printf("Mangga = Rp %d,- \n",mangga);
    printf("Pisang = Rp %d,- \n",pisang);
    printf("Pepaya = Rp %d,- \n",pepaya);
    printf("=====================================\n");

    do
    {
        printf("Berapa banyak durian akan yang anda beli? ");
        scanf("%d", &n_durian);
    }
    while (n_durian < 0);

    do
    {
        printf("Berapa banyak mangga akan yang anda beli? ");
        scanf("%d", &n_mangga);
    }
    while (n_mangga < 0);

    do
    {
        printf("Berapa banyak pisang akan yang anda beli? ");
        scanf("%d", &n_pisang);
    }
    while (n_pisang < 0);

    do
    {
        printf("Berapa banyak pepaya akan yang anda beli? ");
        scanf("%d", &n_pepaya);
    }
    while (n_pepaya < 0);


    durian *= n_durian;
    mangga *= n_mangga;
    pisang *= n_pisang;
    pepaya *= n_pepaya;


    total = durian + mangga + pisang + pepaya;
    printf("Harga total belanja anda adalah: %d\n", total);

    do
    {
        printf("Berapa uang yang akan ada setorkan? ");
        scanf("%d", &setor);
        if (setor <= 0 || (setor - total) < 0)
            printf("Maaf, uang anda kurang.\n");
    }
    while (setor <= 0 || (setor - total) < 0);

    kembalian = setor - (durian + mangga + pisang + pepaya);
    if (kembalian == 0)
    {
        printf("Anda memberikan uang pas.\n");
    }
    else
        printf("Silahkan ambil kembalian anda sebesar: %d\n", kembalian);

    printf("Terima Kasih\n");

    return 0;
}
