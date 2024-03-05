// (1_b) TypovaKonverze.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

int main()
{
    unsigned short cislo1;
    unsigned int cislo2;

    printf("short %d B\tint %d B\n", sizeof(unsigned short), sizeof(unsigned int));

    cislo1 = 0xFFFF;
    cislo2 = cislo1;
    printf("cislo1 -> cislo2\tcislo1:%d cislo2:%d\n", cislo1, cislo2);

    cislo2 = 0xFFFF;  // 0x0000FFFF
    cislo1 = cislo2;
    printf("cislo2 -> cislo1\tcislo1:%d cislo2:%d\t", cislo1, cislo2);
    printf("ztrata dat:%s\n", (unsigned int)(unsigned short)cislo2 == cislo2 ? "Ne" : "Ano");

    cislo2 = 0xFFFFFF; // 0x00FFFFFF
    cislo1 = cislo2;
    printf("cislo2 -> cislo1\tcislo1:%d cislo2:%d\t", cislo1, cislo2);
    printf("ztrata dat:%s\n", (unsigned int)(unsigned short)cislo2 == cislo2 ? "Ne" : "Ano");

    printf("\n(unsigned int)(unsigned short)cislo2 == cislo2\n\n\n");

    // --------------------------------

    char z;
    int kod;

    z = 'A';
    kod = (int)z;
    printf("%c\t%d\t%X\n", z, kod, kod);
    printf("%c\t%dd\t%XH\n", z, kod, kod);
    printf("%c\t%dd\t0x%XH\n", z, kod, kod);

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
