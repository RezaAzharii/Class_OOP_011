#include <iostream>
using namespace std;

class Mahasiswa {

private:
	int nim;
	string nama;

public :
	void Inputdata(){
		cout << "Masukan Nama : ";
		cin >> nama;
	}
	void Tampildata() {
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

void Matakuliah::Inputmk() {
	cout << "\nMasukan kode Mata Kuliah : ";
	cin >> kode;
	cout << "Masukan Nama Mata Kuliah : ";
	cin >> namamk;
	cout << "Masukan Sks Mata Kuliah ; ";
	cin >> sks;

}

void Matakuliah::Tampilmk() {
	cout << "\nKode MataKuliah : " << kode << endl;
	cout << "Nama MataKuliah : " << namamk << endl;
	cout << "Jumlah sks : " << sks << endl;

}

int main()
{
	Mahasiswa mhs;
	Matakuliah mk;
	
	mhs.Inputdata();
	mhs.Tampildata();

	mk.Inputmk();
	mk.Tampilmk();

}