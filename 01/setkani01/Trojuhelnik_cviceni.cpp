#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

class Trojuhelnik { 
	double stranaA, stranaB, stranaC; 
	static int prom;
public:
	double getA() {return stranaA;}
	double getB() {return stranaB;}
	double getC() {return stranaC;}
	double getObvod() {return stranaA+stranaB+stranaC;}
	double getObsah();
	void setA(double a) {stranaA=a;}
	void setB(double b) {stranaB=b;}
	void setC(double c) {stranaC=c;}
	void tisk();
	bool isTrojuhelnik(){
		return (stranaA+stranaB>=stranaC && stranaB+stranaC>=stranaA && stranaC+stranaA>=stranaB);
	}
	Trojuhelnik(double a) {stranaA=a;stranaB=a;stranaC=a;}
	Trojuhelnik(double a, double b, double c) {stranaA=a;stranaB=b;stranaC=c;}
	Trojuhelnik() {}
	Trojuhelnik operator+(const double d) const {
		return  Trojuhelnik(this->stranaA + d, this->stranaB + d, this->stranaC + d);
	}
	void tiskDoSouboru(char* nazev) {
		ofstream file;
		file.open(nazev);
		file << "strana a="<<stranaA<<endl;
		file << "strana b="<<stranaB<<endl;
		file << "strana c="<<stranaC<<endl;
		file << "obvod je "<<getObvod()<<endl;
		file.close();
	}
  
};
int Trojuhelnik::prom=0;
double Trojuhelnik::getObsah() {
	double s=(stranaA+stranaB+stranaC)/2;
	return sqrt(s*(s-stranaA)*(s-stranaB)*(s-stranaC));
}
void Trojuhelnik::tisk() {
	cout<<"strana a="<<stranaA<<endl;
	cout<<"strana b="<<stranaB<<endl;
	cout<<"strana c="<<stranaC<<endl;
}



int main() {
	Trojuhelnik t1;
	t1.setA(5);t1.setB(8);t1.setC(5);
	cout<<"obvod je "<<t1.getObvod()<<endl;
	
	if (t1.isTrojuhelnik())
		cout<<"je trojuhelnik"<<endl;
	else
		cout<<"není trojuhelnik"<<endl;
		
	t1.tisk();
	
	Trojuhelnik t2 = Trojuhelnik(6);
	t2.tisk(); cout<<endl<<endl;
	
	cout<<endl<<"pokus 3"<<endl;
	Trojuhelnik *t3 = new Trojuhelnik(8);
	t3->tisk();
	Trojuhelnik t = *t3+5;
	t.tisk();
	delete t3;
	cout<<endl<<endl<<"t zije!!!"<<endl;
	t.tisk();
	
	cout<<endl<<"pokus 4"<<endl;
	t1.tisk(); cout<<endl;
	Trojuhelnik t4 = t1+5;
	t4.tisk();
	
	t4.tiskDoSouboru("pokus2.txt");
	
	return 0;
}
