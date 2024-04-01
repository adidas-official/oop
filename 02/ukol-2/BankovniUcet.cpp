#include "BankovniUcet.hpp"

int Length_Str(char *s)
{
	int n = 0;
	while (s[n] != '\0')
		n++;
	return n;
}

// ---

BankovniUcet::BankovniUcet(char *c_uctu) : BankovniUcet(c_uctu, MAX_VYBER)
{
	cislo_uctu = new char[strlen(c_uctu) + 1];
	strcpy(cislo_uctu, c_uctu);
}

BankovniUcet::BankovniUcet(char *c_uctu, int max_vyber)
{
	cislo_uctu = new char[strlen(c_uctu) + 1];
	this->max_vyber = max_vyber;
	strcpy(cislo_uctu, c_uctu);
}

BankovniUcet::~BankovniUcet()
{
	/* TODO */
	delete[] cislo_uctu;
	;
}

// ----

double BankovniUcet::GetZustatek() const
{
	/* TODO */
	return 0;
}

char* BankovniUcet::GetCisloUctu() const
{
	/* TODO */
	char* result = (char*) cislo_uctu;
	return result;
}

int BankovniUcet::GetMaxVyber() const
{
	return this->max_vyber;
}

void BankovniUcet::SetMaxVyber(int max_vyber)
{
	/* TODO */
}

int BankovniUcet::Get_n_vklad() const
{
	/* TODO */
	return 0;
}

int BankovniUcet::Get_n_vyber() const
{
	/* TODO */
	return 0;
}

double BankovniUcet::Get_suma_vklad() const
{
	/* TODO */
	return 0;
}

double BankovniUcet::Get_suma_vyber() const
{
	/* TODO */
	return 0;
}

// ----

bool BankovniUcet::Vlozit(double kolik)
{
	/* TODO */
	return false;
}

bool BankovniUcet::Vybrat(double kolik)
{
	/* TODO */
	return false;
}

// ----

/*friend*/ ostream& operator<<(ostream &os, const BankovniUcet &u)
{
	/* TODO */
	return os;
}

char* cislo_uctu1 = new char[12]{ "123456/0800" };
BankovniUcet* u1 = new BankovniUcet(cislo_uctu1);

int main()
{
	cout << u1->GetCisloUctu() << endl;
	cout << u1->GetMaxVyber() << endl;
	return 0;
}
