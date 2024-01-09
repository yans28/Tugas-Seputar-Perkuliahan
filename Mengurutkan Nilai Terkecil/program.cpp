#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    
    std::cout << "Nama : " << std::endl;
    std::cout << "NIM : " << std::endl;
    std::cout << "Prodi : " << std::endl;
    std::cout << "Kelas : " << std::endl;
    std::cout << "Program : " << std::endl;
    std::cout << "==============================================================================================" << std::endl;
    
    int jumlahNIM;
    std::vector<std::string> daftarNIM;

    std::cout << "Masukkan jumlah digit NIM yang akan dimasukkan: ";
    std::cin >> jumlahNIM;

    // Meminta pengguna untuk memasukkan NIM sejumlah yang diminta
    for (int i = 0; i < jumlahNIM; ++i) {
        std::string nim;
        std::cout << "Masukkan NIM ke-" << i + 1 << ": ";
        std::cin >> nim;
        daftarNIM.push_back(nim);
    }

    // Mengurutkan NIM menggunakan fungsi std::sort
    std::sort(daftarNIM.begin(), daftarNIM.end());

    // Menampilkan NIM yang sudah diurutkan dari yang terkecil
    std::cout << "NIM yang diurutkan dari yang terkecil: " << std::endl;
    for (const auto& nim : daftarNIM) {
        std::cout << nim << std::endl;
    }

    return 0;
}
