#include <iostream>
#include <cstring>

using namespace std;

class BankovniUcet {
    private:

    // defaultni pro max vyber
	enum { MAX_VYBER = 1000 };

    int max_vyber;

    char *cislo_uctu; 

    public:
	BankovniUcet(char *cislo_uctu);

    BankovniUcet(char *cislo_uctu, int max_vyber);

    ~BankovniUcet();

    char* getAccountNumber() const;

    int getMaxVyber() const;
};