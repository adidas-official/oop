#include <iostream>
#include <cstring>

using namespace std;

class BankovniUcet {
    private:

    // defaultni pro max vyber
	enum { MAX_VYBER = 1000 };

    int max_vyber;

    char *cislo_uctu; 

    double zustatek;
	int n_vklad;

    public:
	BankovniUcet(char *cislo_uctu);

    BankovniUcet(char *cislo_uctu, int max_vyber);

    ~BankovniUcet();

    char* GetAccountNumber() const;

    int GetMaxVyber() const;

    double GetZustatek() const;
};