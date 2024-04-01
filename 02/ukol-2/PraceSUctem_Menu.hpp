#pragma once

#include "BankovniUcet.hpp"

/*
* T��da obsluhuje pr�ci s ��tem. 
*/
class PraceSUctem
{
public:

	/*
	* Zobraz� menu na standardn� v�stup (dle zad�n�).
	*/
	void tisk_menu();

	/*
	* Zobraz� pokyn 'Zadej volbu' na standardn� v�stup a zajist� na�ten� znaku ze standardn�ho vstupu. 
	* Na�ten� znak vr�t� n�vratovou hodnot (bez kontroly, jak�koliv znak).
	*/
	char volba_menu();

	/*
	* Otestuje znak, jestli je platnou volbou menu. V�sledek testov�n� vr�t� n�vratovou hodnotu true - OK, false - chybn� znak.
	*/
	bool test_volba_menu(char volba);

	/*
	* S vyu�it�m funkc� v��e zajist� zobrazen� menu. A n�sledn� opakovan� na�ten� volby menu, pokud bude zad�na neplatn� volba.
	*/
	char zajisti_volba_menu_kontrola();

	/*
	* Zajist� vytvo�en� objektu bankovn�ho ��tu s defaultn� hodnotou maxim�ln�ho v�b�ru. Odkaz na vytvo�en� objekt vr�t� n�vratovou hodnotou. 
	*/
	BankovniUcet* operace_vytvorit_bankovni_ucet(char *cislo_uctu);

	/*
	*  Zajist� vytvo�en� objektu bankovn�ho ��tu s dan�m ��slem ��tu a hodnotou maxim�ln�ho v�b�ru. Odkaz na vytvo�en� objekt vr�t� n�vratovou hodnotou. 
	*/
	BankovniUcet* operace_vytvorit_bankovni_ucet(char* cislo_uctu, int max_vyber);

	/*	
	* Dot�e se, zda se m� vytvo�it ��et s defaultn� hodnotou maxim�ln�ho vkladu nebo se zadanou hodnotou maxim�ln�ho vkladu. 
	* Zajist� na�ten� ��sla ��tu a p��padn� hodnoty maxim�ln�ho vkladu, zajist� vytvo�en� odpov�daj�c�ho ��tu. 
	* Viz zad�n� �kolu.
	*/
	BankovniUcet* zajistit_vytvorit_bankovni_ucet();

	/*
	* Zajist� vlo�en� ��stky kolik na ��et a zobraz� v�sledek proveden� operace. Viz zad�n� �kolu. 
	*/
	void operace_vlozit_na_ucet(BankovniUcet* u, double kolik);

	/*
	* Pro p�edan� bankovn� ��et provede vklad zadan� ��stky pro vlo�en�. 
	* Vyu�ije v��e definovan�ch metod. 
	*/
	void zajistit_vlozit_na_ucet(BankovniUcet* u);

	/*
	* Zajist� v�b�r ��stky kolik z ��et a zobraz� v�sledek proveden� operace. Viz zad�n� �kolu. 
	*/
	void operace_vybrat_z_uctu(BankovniUcet* u, double kolik);

	/*
	* Pro p�edan� bankovn� ��et provede v�b�r zadan� ��stky pro v�b�r.
	* Vyu�ije v��e definovan�ch metod.
	*/
	void zajistit_vybrat_z_uctu(BankovniUcet* u);

	/*
	* Zajist� zobrazen� informac� o ��t� na standardn�m v�stupu. 
	* Vyu�ije se p�et�en� oper�toru <<.
	*/
	void operace_tisk_info_ucet(BankovniUcet *u);

	/*
	* Zajist� z�pis informac� o ��tu do souboru definovan�ho parametrem. 
	*/
	void operace_ulozit_do_souboru(BankovniUcet* u, char* filename);

	/*
	* Pro p�edan� ��et, zajist� z�pis informac� o ��t� do zadan�ho souboru.
	* Vyu�ije se v��e definovan�ch metod.
	*/
	void zajisti_ulozit_do_souboru(BankovniUcet* u);

	// ----

	/*
	* Zajist� kompletn� realizaci obsluhy a pr�ce ��tem, viz zad�n� �kolu. 
	*/
	void realizace();

};
