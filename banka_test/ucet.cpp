#include "ucet.hpp"

BankovniUcet::BankovniUcet(char *c_uctu) : BankovniUcet::BankovniUcet(c_uctu, MAX_VYBER)
{
    cislo_uctu = new char[strlen(c_uctu) + 1];
	strcpy(cislo_uctu, c_uctu);
}

BankovniUcet::BankovniUcet(char *c_uctu, int max_vyber)
{
    cislo_uctu = new char[strlen(c_uctu) + 1];
    this->max_vyber= max_vyber;

	strcpy(cislo_uctu, c_uctu);
}

BankovniUcet::~BankovniUcet() 
{
    delete[] cislo_uctu;
}

char* BankovniUcet::getAccountNumber() const
{
	char* result = (char*) cislo_uctu;
	return result;
    // return account_number;
}

int BankovniUcet::getMaxVyber() const
{
    return this->max_vyber;
}


int main(int argc, char const *argv[])
{
    char* cislo_uctu1 = new char[12]{ "523456/0800" };
    BankovniUcet* u1 = new BankovniUcet(cislo_uctu1);
    cout << u1->getAccountNumber() << endl;
    cout << u1->getMaxVyber() << endl;

    delete u1;
    return 1;
}
