#include <stdio.h>
#include <cs50.h>

int main()
{
	printf("Masukkan angka integer: ");
	int decimal = GetInt();
	int digit = 0;
	char binary[30];

	do
	{
		if (decimal % 2 == 0)
		{
			binary[digit] = '0';
			decimal /= 2;
		}
		else
		{
			binary[digit] = '1';
			decimal -= 1;
			decimal /= 2;
		}
		
		digit += 1;
	}
	while (decimal >= 1);

	while (digit != 0)
	{
		printf("%c", binary[digit-1]);
		digit--;
	}
	printf("\n");
}
