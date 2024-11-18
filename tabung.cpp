#include <iostream>
#define phi 3.14
using namespace std;

	float volTabung(float jaritabung, float tinggitabung) {
	float volumetabung = phi*jaritabung*jaritabung*tinggitabung;
	return volumetabung;
}
	int main() {
	
	float volumetabung, jaritabung, tinggitabung;
	cout << "Menghitung Volume Tabung\n";
	cout << "Masukkan jari-jari tabung: ";
	cin >> jaritabung;
	cout << "Masukkan tinggi tabung: ";
	cin >> tinggitabung;
	volumetabung = volTabung(jaritabung, tinggitabung);
	cout << "Volume tabung adalah: " << volumetabung << endl;
	return 0;
}
