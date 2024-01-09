#include <iostream>

int main() {
    
    std::cout << "==================================" << std::endl;
    std::cout << "Nama  : " << std::endl;
    std::cout << "NIM   : " << std::endl;
    std::cout << "Kelas : " << std::endl;
    std::cout << "==================================" << std::endl;
    
    // Mendefinisikan array usia mahasiswa
    int usiaMahasiswa[] = {21, 19, 20, 22, 25, 23, 19};
    int jumlahMahasiswa = 7;
    int totalUsia = 0;

    // Menghitung total usia
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        totalUsia += usiaMahasiswa[i];
    }

    // Menghitung rata-rata usia
    float rataRataUsia = static_cast<float>(totalUsia) / jumlahMahasiswa;

    // Menampilkan rata-rata usia
    std::cout << "Usia rata-rata mahasiswa kelas TI.23.B.2 adalah: " << rataRataUsia << " tahun" << std::endl;

    return 0;
}
