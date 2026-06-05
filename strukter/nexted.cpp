#include <iostream>

using namespace std;

struct Matakuliah{
	string kodeMK;
	string namaMK;
	int sks;
};

struct Mahasiswa{
	int npm;
	string nama;
	string kelas;
	
	struct Matakuliah krs;
};

int main() {
	Mahasiswa m1;
	
	m1.npm = 1634;
	m1.nama = "risyana";
	m1.kelas = "IF A";
	m1.krs.kodeMK = "k99";
	m1.krs.namaMK = "Structur Data";
	m1.krs.sks = 2;
	
	cout<<"Data Informasi : "<<endl;
	cout<<"npm : "<<m1.npm<<endl;
	cout<<"nama : "<<m1.nama<<endl;
	cout<<"kelas : "<<m1.kelas<<endl;
	cout<<"kodeMK : "<<m1.krs.kodeMK<<endl;
	cout<<"kodeMK : "<<m1.krs.namaMK<<endl;
}
