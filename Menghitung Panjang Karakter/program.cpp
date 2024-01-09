#include <iostream>
#include <string>
using namespace std;

int main() {
    
    cout << "NIM   : " << endl;
    cout << "Nama  : " << endl;
    cout << "Kelas : " << endl;
    cout << "==================================" << endl;
    
    string nama;
    cout << "Masukkan nama Anda: ";
    getline(cin, nama);

    cout << "Panjang string " << nama << " adalah " << nama.length() << " karakter." << endl;

    return 0;
}