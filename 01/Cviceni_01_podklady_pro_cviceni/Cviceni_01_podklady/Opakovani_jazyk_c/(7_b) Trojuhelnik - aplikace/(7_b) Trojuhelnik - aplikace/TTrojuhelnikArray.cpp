#include "TTrojuhelnik_IO.h"
#include "TTrojuhelnikArray.h"

void vlozit_trojuhelnik(TTrojuhelnik* aTr[], int* nTr, int N_Tr)
{
    aTr[0] = new TTrojuhelnik();
    aTr[0]->a = 2;
    aTr[0]->b = 3;
    aTr[0]->c = 4;
    spocti_trojuhelnik(aTr[0]);

    aTr[1] = new TTrojuhelnik();
    aTr[1]->a = 1;
    aTr[1]->b = 1;
    aTr[1]->c = 2;
    spocti_trojuhelnik(aTr[1]);

    aTr[2] = new TTrojuhelnik();
    aTr[2]->a = 1;
    aTr[2]->b = 1;
    aTr[2]->c = 1;
    spocti_trojuhelnik(aTr[2]);

    aTr[3] = new TTrojuhelnik();
    aTr[3]->a = 2;
    aTr[3]->b = 2;
    aTr[3]->c = 2;
    spocti_trojuhelnik(aTr[3]);

    *nTr = 4;
    return;

    /*
        if (*nTr == N_Tr)
            return;
        aTr[(*nTr)++] = nacti_strany_trojuhelnika_2uk();
        */
}

void vypsat_trojuhelniky(TTrojuhelnik* aTr[], int nTr)
{
    int i;
    printf("Seznam trojuhelniku\n");
    for (i = 0; i < nTr; i++)
        tisk_trojuhelnik(*aTr[i]);
}

void odstranit_trojuhelnik(TTrojuhelnik* aTr[], int* nTr)
{
    int i;
    int id;
    printf("Odstraneni trojuhelnika - Zadej poradi trojuhelnika: ");
    scanf("%d", &id);
    getchar();

    if (id >= 0 && id < *nTr)
    {
        free(aTr[id]);
        for (i = id; i < *nTr; i++)
            aTr[i] = aTr[i + 1];
        aTr[i] = NULL;
        (*nTr)--;

        printf("Trojuhelnik [%d] byl uspesne odstranen.\n", id);
    }
    else
        printf("Chyba. Trojuhelnik nelze odstranit.\nChybne zadane poradi trojuhelnika.\n");
}

int porovnej_trojuhelniky_obvod(const void* o1, const void* o2)
{
    double obvod1 = (*(TTrojuhelnik**)o1)->obvod;
    double obvod2 = (*(TTrojuhelnik**)o2)->obvod;

    if (obvod1 < obvod2)
        return -1;
    else
        if (obvod1 > obvod2)
            return +1;
        else
            return 0;
}

void seradit_trojuhelniky_obvod(TTrojuhelnik* aTr[], int nTr)
{
    qsort(aTr, nTr, sizeof(TTrojuhelnik*), porovnej_trojuhelniky_obvod);
}

int porovnej_trojuhelniky_obsah(const void* o1, const void* o2)
{
    double obsah1 = (*(TTrojuhelnik**)o1)->obsah;
    double obsah2 = (*(TTrojuhelnik**)o2)->obsah;

    if (obsah1 < obsah2)
        return -1;
    else
        if (obsah1 > obsah2)
            return +1;
        else
            return 0;
}

void seradit_trojuhelniky_obsah(TTrojuhelnik* aTr[], int nTr)
{
    qsort(aTr, nTr, sizeof(TTrojuhelnik*), porovnej_trojuhelniky_obsah);
}

void ulozit_do_souboru(TTrojuhelnik* aTr[], int nTr)
{
    char filename[255];
    FILE* f;
    int i;

    printf("Nazev souboru: ");
    scanf("%s", filename);

    f = fopen(filename, "w");
    if (f == NULL)
    {
        fprintf(stderr, "Chyba pri praci souborem. Data nebudou ulozena.");
        return;
    }
    else
    {
        for (i = 0; i < nTr; i++)
            tisk_trojuhelnik_file(f, *aTr[i]);
    }
    fclose(f);

    printf("Data byla do souboru uspesne ulozena.");
}
