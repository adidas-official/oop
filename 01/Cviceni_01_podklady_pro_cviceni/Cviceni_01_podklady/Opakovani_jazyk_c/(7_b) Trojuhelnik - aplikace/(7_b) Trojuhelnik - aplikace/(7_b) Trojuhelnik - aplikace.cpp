// (7_b) Trojuhelnik - aplikace.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include "TTrojuhelnik.h"
//#include "TTrojuhelnik_IO.h"
#include "TTrojuhelnikArray.h"

void menu()
{
    printf("Menu\n");
    printf("1\tvlozit trojuhelnik\n");
    printf("2\tvypsat trojuhelniky\n");
    printf("3\tseradit trojuhelniky podle obvodu\n");
    printf("4\tseradit trojuhelniky podle obsahu\n");
    printf("5\todstranit trojuhelnik\n");
    printf("6\tulozit do souboru\n");
    printf("K - KONEC\n");
}

char menu_volba()
{
    char z;

    do
    {
        printf("Volba: ");
        scanf("%c", &z);
        getchar();
        if (z >= 'a' && z <= 'z')
            z = z - ('a' - 'A');
    } while ((z != '1' && z != '2' && z != '3' && z != '4' && z != '5' && z != 6) && z != 'K');

    return z;
}

//void vlozit_trojuhelnik(TTrojuhelnik *aTr[], int *nTr, int N_Tr)
//{
//    aTr[0] = new TTrojuhelnik();
//    aTr[0]->a = 2;
//    aTr[0]->b = 3;
//    aTr[0]->c = 4;
//    spocti_trojuhelnik(aTr[0]);
//
//    aTr[1] = new TTrojuhelnik();
//    aTr[1]->a = 1;
//    aTr[1]->b = 1;
//    aTr[1]->c = 2;
//    spocti_trojuhelnik(aTr[1]);
//
//    aTr[2] = new TTrojuhelnik();
//    aTr[2]->a = 1;
//    aTr[2]->b = 1;
//    aTr[2]->c = 1;
//    spocti_trojuhelnik(aTr[2]);
//
//    aTr[3] = new TTrojuhelnik();
//    aTr[3]->a = 2;
//    aTr[3]->b = 2;
//    aTr[3]->c = 2;
//    spocti_trojuhelnik(aTr[3]);
//
//    *nTr = 4;
//    return;
//
//    /*
//        if (*nTr == N_Tr)
//            return;
//        aTr[(*nTr)++] = nacti_strany_trojuhelnika_2uk();
//        */
//}
//
//void vypsat_trojuhelniky(TTrojuhelnik* aTr[], int nTr)
//{
//    int i;
//    printf("Seznam trojuhelniku\n");
//    for (i = 0; i < nTr; i++)
//        tisk_trojuhelnik(*aTr[i]);
//}
//
//void odstranit_trojuhelnik(TTrojuhelnik* aTr[], int* nTr)
//{
//    int i;
//    int id;
//    printf("Odstraneni trojuhelnika - Zadej poradi trojuhelnika: ");
//    scanf("%d", &id);
//    getchar();
//
//    if (id >= 0 && id < *nTr)
//    {
//        free(aTr[id]);
//        for (i = id; i < *nTr; i++)
//            aTr[i] = aTr[i + 1];
//        aTr[i] = NULL;
//        (*nTr)--;
//
//        printf("Trojuhelnik [%d] byl uspesne odstranen.\n", id);
//    }
//    else
//        printf("Chyba. Trojuhelnik nelze odstranit.\nChybne zadane poradi trojuhelnika.\n");
//}
//
//int porovnej_trojuhelniky_obvod(const void* o1, const void* o2)
//{
//    double obvod1 = (*(TTrojuhelnik**)o1)->obvod;
//    double obvod2 = (*(TTrojuhelnik**)o2)->obvod;
//
//    if (obvod1 < obvod2)
//        return -1;
//    else
//        if (obvod1 > obvod2)
//            return +1;
//        else
//            return 0;
//}
//
//void seradit_trojuhelniky_obvod(TTrojuhelnik* aTr[], int nTr)
//{
//    qsort(aTr, nTr, sizeof(TTrojuhelnik*), porovnej_trojuhelniky_obvod);
//}
//
//int porovnej_trojuhelniky_obsah(const void* o1, const void* o2)
//{
//    double obsah1 = (*(TTrojuhelnik**)o1)->obsah;
//    double obsah2 = (*(TTrojuhelnik**)o2)->obsah;
//
//    if (obsah1 < obsah2)
//        return -1;
//    else
//        if (obsah1 > obsah2)
//            return +1;
//        else
//            return 0;
//}
//
//void seradit_trojuhelniky_obsah(TTrojuhelnik* aTr[], int nTr)
//{
//    qsort(aTr, nTr, sizeof(TTrojuhelnik*), porovnej_trojuhelniky_obsah);
//}
//
//void ulozit_do_souboru(TTrojuhelnik* aTr[], int nTr)
//{
//    char filename[255];
//    FILE* f;
//    int i;
//
//    printf("Nazev souboru: ");
//    scanf("%s", filename);
//
//    f = fopen(filename, "w");
//    if (f == NULL)
//    {
//        fprintf(stderr, "Chyba pri praci souborem. Data nebudou ulozena.");
//        return;
//    }
//    else
//    {
//        for (i = 0; i < nTr; i++)
//            tisk_trojuhelnik_file(f, *aTr[i]);
//    }
//    fclose(f);
//
//    printf("Data byla do souboru uspesne ulozena.");
//}

void operace()
{
    int i;
    char volba;
    // -- data pro pole trojuhelniku
    const int N_Tr = 5;
    TTrojuhelnik* aTr[N_Tr];
    int nTr;  // nTr = 0;

    nTr = 0;

    // -----

    do
    {
        menu();
        switch (volba = menu_volba())
        {
        case '1':
            vlozit_trojuhelnik(aTr, &nTr, N_Tr);
            break;

        case '2':
            vypsat_trojuhelniky(aTr, nTr);
            break;

        case '3':
            seradit_trojuhelniky_obvod(aTr, nTr);
            break;

        case '4':
            seradit_trojuhelniky_obsah(aTr, nTr);
            break;

        case '5':
            odstranit_trojuhelnik(aTr, &nTr);
            break;

        case '6':
            ulozit_do_souboru(aTr, nTr);
            break;

        case 'K':
            break;
        }
    } while (volba != 'K');

    // -----

    for (i = 0; i < nTr; i++)
        free(aTr[i]);
}

int main()
{
    operace();
}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
