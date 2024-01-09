#include <iostream>
#include <string>
using namespace std;

int main() {
    
    cout << "NIM   : " << endl;
    cout << "Nama  : " << endl;
    cout << "Kelas : " << endl;
    cout << "==================================" << endl;
    
    string nama_lengkap, gelar_to_be;

    cout << "Masukkan nama lengkap Anda: ";
    getline(cin, nama_lengkap);

    cout << "Masukkan gelar yang ingin Anda ambil: ";
    getline(cin, gelar_to_be);

    string nama_baru = nama_lengkap + ", " + gelar_to_be;

    cout << "Nama baru Anda setelah menggabungkan nama lengkap dan gelar adalah: " << nama_baru << endl;

    return 0;
}
