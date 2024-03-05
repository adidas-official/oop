// (6) Trojuhelnik - struct array.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

#include "TTrojuhelnik.h"
#include "TTrojuhelnik_IO.h"

void ukazka_1()
{
    const int N_Tr = 5;     // velikost pole, max. počet záznamů trojúhelníků
    TTrojuhelnik aT[N_Tr];  // pole záznamů trojuhelniků o velikosti N_Tr, neinicializované záznamy
    int nTr;    // skutečný počet vyplněných záznamů
    int i;      // řídící proměnná cyklu
    
    nTr = 0;
    nacti_strany_trojuhelnika(&aT[nTr++]);   // &aT[0]
    nacti_strany_trojuhelnika(&aT[nTr++]);   // &aT[1]
    nacti_strany_trojuhelnika(&aT[nTr++]);   // &aT[2]

    for (i = 0; i < nTr; i++)
        spocti_trojuhelnik(&aT[i]);

    for (i = 0; i < nTr; i++)
        tisk_trojuhelnik(aT[i]);
}

void ukazka_2()
{
    const int N_Tr = 5;
    TTrojuhelnik* aT[N_Tr];
    int nTr;    // skutečný počet vyplněných záznamů
    int i;      // řídící proměnná cyklu

    nTr = 0;
    aT[nTr++] = nacti_strany_trojuhelnika_2uk();   // &aT[0]
    aT[nTr++] = nacti_strany_trojuhelnika_2uk();   // &aT[1]
    aT[nTr++] = nacti_strany_trojuhelnika_2uk();   // &aT[2]

    for (i = 0; i < nTr; i++)
        spocti_trojuhelnik(aT[i]);

    for (i = 0; i < nTr; i++)
        tisk_trojuhelnik(*aT[i]);

    // ------

    for (i = 0; i < nTr; i++)
        free(aT);
}

int main()
{
    ukazka_1();
    ukazka_2();
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
