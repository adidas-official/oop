#include "TTrojuhelnik_IO.h"

void nacti_strany_trojuhelnika(TTrojuhelnik* t)
{
    printf("Zadej stranu a: ");
    scanf("%lf", &t->a);
    printf("Zadej stranu b: ");
    scanf("%lf", &t->b);
    printf("Zadej stranu c: ");
    scanf("%lf", &t->c);
}

TTrojuhelnik nacti_strany_trojuhelnika_2()
{
    TTrojuhelnik tr;
    printf("Zadej stranu a: ");
    scanf("%lf", &tr.a);
    printf("Zadej stranu b: ");
    scanf("%lf", &tr.b);
    printf("Zadej stranu c: ");
    scanf("%lf", &tr.c);

    return tr;
}

TTrojuhelnik* nacti_strany_trojuhelnika_2uk()
{
    TTrojuhelnik *uk_tr = (TTrojuhelnik *) malloc(sizeof(TTrojuhelnik));
    printf("Zadej stranu a: ");
    scanf("%lf", &(uk_tr->a));
    printf("Zadej stranu b: ");
    scanf("%lf", &(uk_tr->b));
    printf("Zadej stranu c: ");
    scanf("%lf", &(uk_tr->c));

    return uk_tr;
}

void tisk_trojuhelnik(TTrojuhelnik t)
{
/*  printf("Trojuhelnik:a = %f;b = %f;c = %f;", t.a, t.b, t.c);
    printf("Obvod = %f;Obsah = %f;", t.obvod, t.obsah);
    printf("Rovnoramenny = ");
    if (t.rovnoramenny == 0)
        printf("NE");
    else
        printf("ANO");
    printf(";Rovnostranny = ");
    if (t.rovnostranny == 0)
        printf("NE");
    else
        printf("ANO");
    printf("\n");
    */
    tisk_trojuhelnik_file(stdout, t);
}

void tisk_trojuhelnik_file(FILE* f, TTrojuhelnik t)
{
    fprintf(f, "Trojuhelnik:a = %f;b = %f;c = %f;", t.a, t.b, t.c);
    fprintf(f, "Obvod = %f;Obsah = %f;", t.obvod, t.obsah);
    fprintf(f, "Rovnoramenny = ");
    if (t.rovnoramenny == 0)
        fprintf(f, "NE");
    else
        fprintf(f, "ANO");
    fprintf(f, ";Rovnostranny = ");
    if (t.rovnostranny == 0)
        fprintf(f, "NE");
    else
        fprintf(f, "ANO");
    fprintf(f, "\n");
}
