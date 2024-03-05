// (2) BitoveOperace_BitoveOperatory.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

void priklad_1()
{
    short a = 6, b = 5, c, d;
    bool e, f, g; // short

    c = a & b;
    // bitovy soucin
    // a:   6   00000000 00000110
    // b:   5   00000000 00000101
    // &:   4   00000000 00000100

    d = a | b;
    // bitovy soucet
    // a:   6   00000000 00000110
    // b:   5   00000000 00000101
    // |:   7   00000000 00000111

    e = a && b; // a != 0 && b != 0
        // logicky soucin
        // a:   6
        // b:   5
        // &&:  1

    f = a || b; // a != 0 || b != 0
        // logicky soucet
        // a:   6
        // b:   5
        // |:   1

    g = !a; // a == 0;

    printf("a:%d,\nb:%d\n&:%d\n\n", a, b, c);
    printf("a:%d,\nb:%d\n|:%d\n\n", a, b, d);
    printf("a:%d,\nb:%d\n&&:%d\n\n", a, b, e);
    printf("a:%d,\nb:%d\n||:%d\n\n", a, b, f);
    printf("a:%d,\nb:%d\na==0:%d\n\n", a, b, g);
}

void priklad_2()
{
    // Priorita operátorů!
    short cislo = 7;    // 00000000 00000111
    bool b0 = (cislo & 0x01) != 0;    // 00000000 0000000x: 00000000 00000111 & 00000000 00000001 = 00000000 00000001
    bool b1 = (cislo & 0x02) != 0;    // 00000000 000000x0: 00000000 00000111 & 00000000 00000010 = 00000000 00000010
    bool b2 = (cislo & 0x04) != 0;    // 00000000 00000x00: 00000000 00000111 & 00000000 00000100 = 00000000 00000100
    bool b3 = (cislo & 0x08) != 0;    // 00000000 0000x000: 00000000 00000111 & 00000000 00001000 = 00000000 00000000

    short cislo2 = 0x00;
    cislo2 |= 0x02;
    cislo2 |= 0x04;
    // 00000000 00000110

    short cislo3;
    cislo3 = 0x07;

    short cislo4;
    cislo4 = 0x0A; // 10;

    printf("b0:%d b1:%d b2:%d b3:%d\n", b0, b1, b2, b3);
    printf("cislo:%d cislo2:%d cislo3:%d cislo4:%d\n", cislo, cislo2, cislo3, cislo4);
}

void priklad_3()
{
    const unsigned short cislo1 = 0xC3;             // 11000011
    const unsigned short cislo2 = 0xBF;             // 10111111
    unsigned short cislo3 = cislo1 ^ cislo2;        // 01111100

    printf("cislo1: %d (%X)\n", cislo1, cislo1);
    printf("cislo2: %d (%X)\n", cislo2, cislo2);
    printf("cislo3: %d (%X)\n", cislo3, cislo3);
}

int main()
{
    priklad_1();
    priklad_2();
    priklad_3();
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
