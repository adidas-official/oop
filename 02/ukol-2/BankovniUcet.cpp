#include "BankovniUcet.hpp"

int Length_Str(char *s)
{
	int n = 0;
	while (s[n] != '\0')
		n++;
	return n;
}

// ---

BankovniUcet::BankovniUcet(char *cislo_uctu) : BankovniUcet(cislo_uctu, MAX_VYBER)
{
	;
}

BankovniUcet::BankovniUcet(char *cislo_uctu, int max_vyber)
{
	/* TODO */
}

BankovniUcet::~BankovniUcet()
{
	/* TODO */
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
	char* result = (char*)"";
	return result;
}

int BankovniUcet::GetMaxVyber() const
{
	/* TODO */
	return 0;
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
