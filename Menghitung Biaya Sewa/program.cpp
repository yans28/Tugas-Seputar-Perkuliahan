#include <iostream>

int main() {
    int jamMulai, jamSelesai;
    const int biayaPerJam = 200000;

    std::cout << "=================================" << std::endl;
    std::cout << "Nama : " << std::endl;
    std::cout << "NIM  : " << std::endl;
    std::cout << "Kelas: " << std::endl;
    std::cout << "=================================" << std::endl;
    
    std::cout << "Masukkan jam mulai: ";
    std::cin >> jamMulai;

    std::cout << "Masukkan jam selesai: ";
    std::cin >> jamSelesai;

    // Menghitung lama sewa lapangan dalam jam
    int lamaSewa = jamSelesai - jamMulai;

    // Menghitung total biaya
    int totalBiaya = lamaSewa * biayaPerJam;

    // Menampilkan total biaya
    std::cout << "Total biaya sewa lapangan futsal adalah: Rp." << totalBiaya << std::endl;

    return 0;
}
