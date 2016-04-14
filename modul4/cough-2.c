#include <stdio.h>
// prototype
void cough(void);
int main(void)
{
    // cough three times
    for (int i = 0; i < 3; i++)
    {
        cough();
    }
}
/**
 * Coughs once.
 */
void cough(void)
{
    printf("cough\n");
}
