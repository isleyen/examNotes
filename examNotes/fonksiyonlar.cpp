#include <iostream>
#include <fstream>
#include <vector>
#include "fonksiyonlar.h"

void ogrenciEkle(vector<Ogrenci>& ogrenciler) {
	string ad;
	int notu;
	cout << "Ogrencinin Adini Giriniz: ";
	cin >> ad;
	cout << "Sinav Notunu Giriniz: ";
	cin >> notu;

	ogrenciler.push_back(Ogrenci(ad, notu)); 
}

void dosyayaKaydet(const vector<Ogrenci>& ogrenciler) { 
	ofstream outfile("ogrenciler.txt");
	for (const auto& ogrenci : ogrenciler) { 
		outfile << ogrenci.ad << " " << ogrenci.sinavNotu << endl;
	}
	outfile.close();
}

void dosyadanOku(vector<Ogrenci>& ogrenciler) { 
	ifstream inFile("ogrenciler.txt");
	string ad;
	int notu;
	while (inFile >> ad >> notu) {   
		ogrenciler.push_back(Ogrenci(ad, notu));

	}
	inFile.close();
}

void ogrencileriGoster(const vector<Ogrenci>& ogrenciler) {
	for (const auto& ogrenci : ogrenciler) {  
		cout << "Ad: " << ogrenci.ad << ", Not: " << ogrenci.sinavNotu << endl;
	}
}