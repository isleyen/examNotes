#include <iostream>
#include <fstream>
#include <vector>
#include "ogrenci.h"

void ogrenciEkle(vector<Ogrenci>& ogrenciler);
void dosyayaKaydet(const vector<Ogrenci>& ogrenciler);
void dosyadanOku(vector<Ogrenci>& ogrenciler);
void ogrencileriGoster(const vector<Ogrenci>& ogrenciler);

int main() {

	vector<Ogrenci> ogrenciler;
	int secim;

	dosyadanOku(ogrenciler);

	do{
		cout << "1. Ogrenci Ekle" << endl;
		cout << "2. Ogrencileri Gostre" << endl;
		cout << "3. Kaydet ve Cik" << endl;
		cout << "Seciminizi Giriniz: ";
		cin >> secim;

		switch (secim) {
		case 1:
			ogrenciEkle(ogrenciler);
			break;
		case 2:
			ogrencileriGoster(ogrenciler);
			break;
		case 3:
			dosyayaKaydet(ogrenciler);
			cout << "Veriler Kaydedildi. Cikis Yapiliyor...";
			break;

		default:
			cout << "Gecersiz Secim! Lutfen Tekrar Deneyin." << endl;
		}

	} while (secim != 3);

	return 0;
}