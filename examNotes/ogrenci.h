#include <string>

using namespace std;

class Ogrenci {
public:
	string ad;
	int sinavNotu;
	Ogrenci() : ad(""), sinavNotu() {} 
	Ogrenci(string a , int notu) : ad(a), sinavNotu(notu) {}
};