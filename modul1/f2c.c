#include <cs50.h>
#include <stdio.h>

int main(void)
{
	// ask user for temperature in Fahrenheit
	printf("Temperature in F: ");
	float f = GetFloat();

	// convert F to C
	float c = 5.0 / 9.0 * (f - 32.0);

	// display results to one decimal place
	printf("%.1f\n", c);
}
