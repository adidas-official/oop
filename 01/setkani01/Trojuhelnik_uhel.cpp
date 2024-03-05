#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

class Trojuhelnik { 
	double a, b, c, acos; 
public:
  
};
/*
	Kosinova vìta - viz 6. Výpoèet vnitøních úhlù trojúhelníku pomocí kosinové vìty
	na https://www.hackmath.net/cz/kalkulacka/vypocet-trojuhelniku?q=a%3D3+b%3D4+c%3D5&submit=Vy%C5%99e%C5%A1
*/

int main() {
	double a=3, b=5, c=4, vysledekRadiany, vysledekStupne, vypocet;
	vypocet=(b*b+c*c-a*a)/(2*b*c);
	cout << "x = " << vypocet << endl;
	vysledekRadiany = acos(vypocet);
  	cout << "acos(x) = " << vysledekRadiany << " radians" << endl;
  
  	// result in degrees
  	vysledekStupne=vysledekRadiany*180/M_PI;
  	cout << "acos(x) = " << vysledekStupne << " degrees" << endl;
  	
  	if (vysledekStupne>=89.999 && vysledekStupne<=90.001)
  		cout << "je pravouhly" << endl;
  	else
  		cout << "neni pravouhly" << endl;
  
  	return 0;
}
