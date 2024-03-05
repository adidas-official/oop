// (3_a) Trojuhelnik.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>

int main()
{
    double a, b, c;
    double obvod, obsah;
    double s;
    short rovnostranny, rovnoramenny;

    // pořízení vstupních dat (načtení dat)
    printf("Zadej stranu a: ");
    scanf("%lf", &a);
    printf("Zadej stranu b: ");
    scanf("%lf", &b);
    printf("Zadej stranu c: ");
    scanf("%lf", &c);

    // výpočet
    obvod = a + b + c;
    s = (a + b + c) / 2;
    obsah = sqrt(s * (s - a) * (s - b) * (s - c));
    rovnostranny = a == b && b == c && c == a;
    rovnoramenny = !rovnostranny && (a == b || b == c || c == a);

    // zprostředkování výsledku
    printf("Trojuhelnik:\na = %f\nb = %f\nc = %f\n", a, b, c);
    printf("Obvod = %f\nObsah = %f\n", obvod, obsah);
    printf("Rovnoramenny = %d\nRovnostranny = %d\n", rovnoramenny, rovnostranny);

    system("PAUSE");
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
