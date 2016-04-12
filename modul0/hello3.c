#include <stdio.h>
#include <cs50.h>

int main(void)
{
	printf("Nama: ");
	string nama = GetString();
	printf("Hello, %s\n", nama);
}
