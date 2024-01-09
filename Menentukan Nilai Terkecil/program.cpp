#include <iostream>
#include <string>
#include <limits>

int main() {
    
    std::cout << "Nama : " << std::endl;
    std::cout << "NIM : " << std::endl;
    std::cout << "Prodi : " << std::endl;
    std::cout << "Kelas : " << std::endl;
    std::cout << "Program : " << std::endl;
    std::cout << "==============================================================================================" << std::endl;    int jumlahNIM;
    std::string nimTerkecil;
    std::string nim;

    std::cout << "Masukkan jumlah digit NIM yang akan dimasukkan: ";
    std::cin >> jumlahNIM;

    // Membersihkan newline di buffer setelah input jumlahNIM
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Masukkan NIM ke-1: ";
    std::getline(std::cin, nim); // Masukkan NIM pertama
    nimTerkecil = nim; // Inisialisasi NIM terkecil dengan NIM pertama

    // Meminta pengguna untuk memasukkan NIM sejumlah yang diminta
    for (int i = 1; i < jumlahNIM; ++i) {
        std::cout << "Masukkan NIM ke-" << i + 1 << ": ";
        std::getline(std::cin, nim);
        if (nim < nimTerkecil) {
            nimTerkecil = nim; // Memperbarui NIM terkecil jika ditemukan nilai yang lebih kecil
        }
    }

    // Menampilkan nilai terkecil NIM yang dimasukkan
    std::cout << "Nilai terkecil dari NIM yang dimasukkan adalah: " << nimTerkecil << std::endl;

    return 0;
}
