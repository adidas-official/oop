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
	this->n_vklad = 0;
	this->n_vyber = 0;
	this->zustatek = 0;
	this->suma_vklad = 0;
	this->suma_vyber = 0;
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
	delete[] cislo_uctu;
	
}

// ----

double BankovniUcet::GetZustatek() const
{
	return this->zustatek;
}

char* BankovniUcet::GetCisloUctu() const
{
	char* result = (char*) cislo_uctu;
	return result;
}

int BankovniUcet::GetMaxVyber() const
{
	return this->max_vyber;
}

void BankovniUcet::SetMaxVyber(int max_vyber)
{
	this->max_vyber = max_vyber;
}

int BankovniUcet::Get_n_vklad() const
{
	return this->n_vklad;
}

int BankovniUcet::Get_n_vyber() const
{
	return this->n_vyber;
}

double BankovniUcet::Get_suma_vklad() const
{
	return this->suma_vklad;
}

double BankovniUcet::Get_suma_vyber() const
{
	return this->suma_vyber;
}

// ----

bool BankovniUcet::Vlozit(double kolik)
{
	// todo: prijmout jen kladna cisla
	if (kolik > 0)
	{
		cout << "Vlozeno " << kolik << " na ucet" << endl;
		this->zustatek += kolik;
		this->n_vklad++;
		this->suma_vklad += kolik;
		return true;
	}
	cout << "Nelze vkladat zaporne hodnoty";
	return false;
}

bool BankovniUcet::Vybrat(double kolik)
{
	// todo: prijmout jen kladna cisla
	if (kolik > 0 && kolik <= this->zustatek && kolik <= this->max_vyber)
	{
		this->n_vyber++;
		this->zustatek-=kolik;
		this->suma_vyber += kolik;
		return true;
	}

	cout << "Prekrocen limit pro vyber nebo nedostatek penez" << endl;
	return false;
}

// ----

/*friend*/ ostream& operator<<(ostream &os, const BankovniUcet &u)
{
	os << u.GetCisloUctu() << ":" << u.GetZustatek() << " Kč" << endl;
	os << u.Get_n_vklad() << ":+" << u.Get_suma_vklad() << " Kč" << endl;
	os << u.Get_n_vyber() << ":-" << u.Get_suma_vyber() << " Kč" << endl;
	return os;
}


// int main()
// {		
// 	char* cislo_uctu1 = new char[12]{ "123456/0800" };
// 	BankovniUcet* u1 = new BankovniUcet(cislo_uctu1);

// 	// u1->Vlozit(500); // ok
// 	// cout << "Zustatek: " << u1->GetZustatek() << endl;
// 	cout << "Pocet vkladu: " << u1->Get_n_vklad() << endl;
// 	// cout << "Pocet vyberu: " << u1->Get_n_vyber() << endl;
// 	// u1->Vybrat(200); // ok
// 	// cout << "Zustatek: " << u1->GetZustatek() << endl;
// 	// cout << "Pocet vkladu: " << u1->Get_n_vklad() << endl;
// 	// cout << "Pocet vyberu: " << u1->Get_n_vyber() << endl;
// 	// u1->Vybrat(600); // nedostatek penez
// 	// cout << "Zustatek: " << u1->GetZustatek() << endl;
// 	// cout << "Pocet vkladu: " << u1->Get_n_vklad() << endl;
// 	// cout << "Pocet vyberu: " << u1->Get_n_vyber() << endl;
// 	// u1->Vlozit(5000); // ok
// 	// cout << "Zustatek: " << u1->GetZustatek() << endl;
// 	// cout << "Pocet vkladu: " << u1->Get_n_vklad() << endl;
// 	// cout << "Pocet vyberu: " << u1->Get_n_vyber() << endl;
// 	// u1->Vybrat(2000); // vyber limit
// 	// cout << "Zustatek: " << u1->GetZustatek() << endl;
// 	// cout << "Pocet vkladu: " << u1->Get_n_vklad() << endl;
// 	// cout << "Pocet vyberu: " << u1->Get_n_vyber() << endl;
	
// 	// cout << *u1;

// 	return 0;
// }
