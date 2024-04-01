#pragma once

#include <iostream>
#include <cstring>
using namespace std;

/*
* Glob�ln� funkce. 
* Zjist� d�lku �et�zce. 
*/
int Length_Str(char* s);

/*
 * T��da popisuje bankovn� ��et.
 */
class BankovniUcet
{
private:

	/*
	* Konstanta objektu. Defaultn� hodnota pro max. v�b�r.
	*/
	enum { MAX_VYBER = 1000 };

	/*
	* Hodnota max. v�b�ru nastavena na ��tu.
	*/
	int max_vyber;

	/*
	* Z�statek na ��tu.
	*/
	double zustatek;

	/*
	* ��slo ��tu (dynamicky alokovan� �et�zec).
	*/
	char *cislo_uctu;

	/*
	* Po�et vkladu.
	*/
	int n_vklad;

	/*
	* Po�et v�b�ru.
	*/
	int n_vyber;

	/*
	* Soucet vkladu (Celkovy vklad).
	*/
	double suma_vklad;

	/*
	* Sou�et v�b�ru (Celkov� v�b�r).
	*/
	double suma_vyber;

public:	

	/*
	* Konstruktor parametrick�. 
	* Provede inicializaci objektu bankovn�ho ��tu podle p�edan�ho ��sla ��tu (pou�ije kopii hodnoty �et�zce a vytvo�� �et�zec atributu nezbytn� nutn� d�lky), hodnota max. v�b�ru bude defaultn� hodnota specifikovana konstantou MAX_VYBER.
	*/
	BankovniUcet(char *cislo_uctu);

	/*
	* Konstruktor parametrick�. 
	* Provede inicializaci objektu bankovn�ho ��tu z p�edan�ch hodnot ��sla ��tu  (pou�ije kopii hodnoty �et�zce a vytvo�� �et�zec atributu nezbytn� nutn� d�lky) a maxim�ln�ho v�b�ru. 
	*/
	BankovniUcet(char *cislo_uctu, int max_vyber);

	/*
	* Destruktor.
	* Provede uvoln�n� objektu.
	*/
	~BankovniUcet();

	// ----

	/*
	* Vr�t� aktu�ln� z�statek na ��tu (hodnotu nastavenou v atributu zustatek).
	*/
	double GetZustatek() const;

	/*
	* Vr�t� nastaven� ��slo ��tu, resp. odkaz na text.
	*/
	char* GetCisloUctu() const;

	/*
	* Vr�t� nastaven� maxim�ln� v�b�r z ��tu (hodnotu nastavenou v atributu max_vyber).
	*/
	int GetMaxVyber() const;

	/*
	* P�enastav� hodnotu maxim�ln�ho v�b�ru na ��tu pokud bude nastavovan� hodnota platnou hodnotou kladn�ho ��sla. V opa�n�m p��pad� nastaven� neprob�hne.
	*/
	void SetMaxVyber(int max_vyber);

	/*
	* Vr�t� po�et vklad� (hodnotu nastavenou v atributu n_vklad).
	*/
	int Get_n_vklad() const;

	/*
	* Vr�t� po�et v�b�r� (hodnotu nastavenou v atributu n_vyber).
	*/
	int Get_n_vyber() const;

	/*
	* Vr�t� sumu vklad� (hodnotu nastavenou v atributu suma_vklad).
	*/
	double Get_suma_vklad() const;

	/*
	* Vr�t� sumu v�b�r� (hodnotu nastavenou v atributu suma_vyber). 
	*/
	double Get_suma_vyber() const;

	// ----

	/*
	* Zajist� vlo�en� ��stky kolik na ��et, pokud bude ��stka spl�ovat podm�nku nez�porn�ho ��sla. N�vratovou hodnotou vr�t� p��znak proveden� operace - true : provedeno, false : neprovedeno. 
	*/
	bool Vlozit(double kolik);

	/*
	* Zajist� v�b�r ��stky kolik z ��tu, pokud bude ��stka spl�ovat podm�nku nez�porn�ho ��sla a podm�nku pro omezen� v�b�ru (< max_vyber).
	*/
	bool Vybrat(double kolik);

	// ----

	/*
	* P�et�en� oper�toru v�stupu, kter� zap�e do v�stupn�ho proudu informace o ��etu ve tvaru:
	* ��slo ��tu : z�statek K�
	* po�et vklad� : +suma K�
	* po�et v�b�r� : -suma K�
	*/
	friend ostream& operator<<(ostream &os, const BankovniUcet &u);
};



