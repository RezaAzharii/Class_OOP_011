#include <iostream>
using namespace std;

class Mahasiswa {

private:
	int nim;
	string nama;

public :
	void inputdata() {
		cout << "Masukan NIM : ";
		cin >> nim;
		cout << "Masukan Nama : ";
		cin >> nama;
	}
	void tampildata() {
		cout << "\nNIM : " << nim << endl;
		cout << "Nama : " << nama << endl;
	}
};

class Matakuliah {
private :
	string kode;
	string namamk;
	int sks;
public :
	void Inputmk();
	void Tampilmk();

};
