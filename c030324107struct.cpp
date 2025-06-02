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
    mahasiswa* data = &rio;
    cout << "NIM = "; 		getline(cin, data->nim);
	cout << "Nama = ";		getline(cin, data->nama);
	cout << "Alamat = ";	getline(cin, data->alamat);
	cout << "IPK = ";		cin >> data->ipk;

    system("cls");
	cout << "\n-------------- Data Anda --------------\n";
	cout << "NIM    : " << data->nim << endl;
	cout << "Nama   : " << data->nama << endl;
	cout << "Alamat : " << data->alamat << endl;
	cout << "IPK    : " << data->ipk << endl;
	cout << "---------------------------------------\n";
    return 0;
}