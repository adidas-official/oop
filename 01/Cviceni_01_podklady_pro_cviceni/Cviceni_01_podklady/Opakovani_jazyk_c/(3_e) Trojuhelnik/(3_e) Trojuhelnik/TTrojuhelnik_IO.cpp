#include "TTrojuhelnik_IO.h"

void nacti_strany_trojuhelnika(double* a, double* b, double* c)
{
    printf("Zadej stranu a: ");
    scanf("%lf", a);
    printf("Zadej stranu b: ");
    scanf("%lf", b);
    printf("Zadej stranu c: ");
    scanf("%lf", c);
}

void tisk_trojuhelnik(double a, double b, double c, double obvod, double obsah, bool rovnoramenny, bool rovnostranny)
{
    printf("Trojuhelnik:\na = %f\nb = %f\nc = %f\n", a, b, c);
    printf("Obvod = %f\nObsah = %f\n", obvod, obsah);
    //printf("Rovnoramenny = %d\nRovnostranny = %d\n", rovnoramenny, rovnostranny);
    printf("Rovnoramenny = ");
    if (rovnoramenny == 0)
        printf("NE");
    else
        printf("ANO");
    printf("\nRovnostranny = ");
    if (rovnostranny == 0)
        printf("NE");
    else
        printf("ANO");
    printf("\n");
}
