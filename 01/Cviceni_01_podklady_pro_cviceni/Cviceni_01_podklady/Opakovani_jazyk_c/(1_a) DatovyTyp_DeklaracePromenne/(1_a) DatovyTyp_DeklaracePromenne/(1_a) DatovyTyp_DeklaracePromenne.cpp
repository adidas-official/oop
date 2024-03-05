// (1_a) DatovyTyp_DeklaracePromenne.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

int main()
{
    // datový typ: udavá typ údaje, který lze zapsat (uložit) do proměnné
    // jednoduché (základní, primitivní datové typy):
    //  char
    //  float, double
    //  short (2B), int (4B), long (4B), long int

    // byte (1B), 1B = 8b => 2^8=256, v jazyce C/C++ tento datový typ není (!)
    //      unsigned <0; 255>
    //      signed <-128; +127>

    // int (4B), 4B = 32b => 2^32
    //      unsigned <0; 2^32 - 1>
    //      signed <-2^31; +2^31 - 1>

    int a = 6;  // deklarace promenne s inicializaci
    int b = 5;
    int c;      // deklarace promenne
    int d;
    //int a = 6, b = 5, c, d;
    float e = 2.5f;
    float f;
    // float e = 2.5f, f; 
    const float F = 1.5f;
    const int MAX = 10;  // deklarace konstanty
    const char C = 'A';

    unsigned int g;
    signed int h;

    // vlastní typ
    typedef int CELE_CISLO;
    typedef unsigned char BYTE;
    CELE_CISLO cislo;
    BYTE bajtove_cislo;

    // -----------------------------------------------------

    // velikost proměnné datového typu
    printf("char: %d B\n", sizeof(char));
    printf("short: %d B\n", sizeof(short));
    printf("int: %d B\n", sizeof(int));     // 'int' vs 'unsigned int' ?
    printf("long: %d B\n", sizeof(long));
    printf("float: %d B\n", sizeof(float));
    printf("double: %d B\n", sizeof(double));

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
