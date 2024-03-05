#include "TTrojuhelnik.h"

// definice funkcí

double spocti_obvod(double a, double b, double c)
{
    /*
    double obvod;
    obvod = a + b + c;
    return obvod;
    */
    return a + b + c;
}

double spocti_obsah(double a, double b, double c)
{
    double s;
    double obsah;
    s = (a + b + c) / 2;
    obsah = sqrt(s * (s - a) * (s - b) * (s - c));
    // obsah = sqrt((a + b + c) / 2 * ((a + b + c) / 2 - a) * ((a + b + c) / 2 - b) * ((a + b + c) / 2 - c));
    return obsah; // sqrt(s * (s - a) * (s - b) * (s - c));
}

bool test_rovnoramenny(double a, double b, double c)
{
    return !test_rovnostranny(a, b, c) && (a == b || b == c || c == a);
}

bool test_rovnostranny(double a, double b, double c)
{
    return a == b && b == c && c == a;
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

bool test_trojuhelnik(double a, double b, double c)
{
    bool test = a > 0.0 && b > 0.0 && c > 0.0;
    test = test && ((a + b) > c && (b + c) > a && (c + a) > b);
    return test;
}

void nacti_strany_trojuhelnika(double* a, double* b, double* c)
{
    printf("Zadej stranu a: ");
    scanf("%lf", a);
    printf("Zadej stranu b: ");
    scanf("%lf", b);
    printf("Zadej stranu c: ");
    scanf("%lf", c);
}
