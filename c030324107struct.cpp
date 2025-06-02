#include <iostream>
#include <conio.h>
using namespace std;

struct mahasiswa{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main(){
    mahasiswa rio;
    cout << "NIM = "; 		getline(cin, rio.nim);
	cout << "Nama = ";		getline(cin, rio.nama);
	cout << "Alamat = ";	getline(cin, rio.alamat);
	cout << "IPK = ";		cin >> rio.ipk;

    system("cls");
	cout << "\n-------------- Data Anda --------------\n";
	cout << "NIM    : " << rio.nim << endl;
	cout << "Nama   : " << rio.nama << endl;
	cout << "Alamat : " << rio.alamat << endl;
	cout << "IPK    : " << rio.ipk << endl;
	cout << "---------------------------------------\n";
    return 0;
}