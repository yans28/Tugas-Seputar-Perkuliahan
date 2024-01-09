#include <iostream>
#include <vector>

std::string hari_ke_angka(int n) {
    std::vector<std::string> hari = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    if (n < 1 || n > 7) {
        return "Angka tidak valid. Masukkan angka antara 1 sampai 7.";
    } else {
        return hari[n-1];
    }
}

int main() {
    int angka;
    std::cout << "Masukkan angka antara 1 sampai 7: ";
    std::cin >> angka;
    std::cout << hari_ke_angka(angka) << std::endl;
    return 0;
}