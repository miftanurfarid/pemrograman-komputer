#include <stdio.h>
#include <cs50.h>

int main()
{
	printf("Masukkan huruf kecil: ");
	char kecil = GetChar();

	int besar = (int)kecil - 32;
	printf("huruf besar dari %c adalah %c.\n", kecil, (char) besar);
	return 0;
}
