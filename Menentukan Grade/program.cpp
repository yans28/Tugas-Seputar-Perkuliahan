#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string nama;
    float nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;
    char grade;

    // Input nama mahasiswa, nilai tugas, nilai UTS, dan nilai UAS
    cout << "Masukkan nama mahasiswa: ";
    getline(cin, nama);
    cout << "Masukkan nilai tugas: ";
    cin >> nilai_tugas;
    cout << "Masukkan nilai UTS: ";
    cin >> nilai_uts;
    cout << "Masukkan nilai UAS: ";
    cin >> nilai_uas;

    // Hitung nilai akhir
    nilai_akhir = nilai_tugas * 0.3 + nilai_uts * 0.35 + nilai_uas * 0.35;

    // Tentukan grade nilai
    if (nilai_akhir >= 80) {
        grade = 'A';
    } else if (nilai_akhir >= 70) {
        grade = 'B';
    } else if (nilai_akhir >= 50) {
        grade = 'C';
    } else if (nilai_akhir >= 30) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    // Tampilkan nama mahasiswa, nilai tugas, nilai UTS, nilai UAS, nilai akhir, dan grade nilai
    cout << endl << "Nama Mahasiswa: " << nama << endl;
    cout << "Nilai Tugas: " << nilai_tugas << endl;
    cout << "Nilai UTS: " << nilai_uts << endl;
    cout << "Nilai UAS: " << nilai_uas << endl;
    cout << "Nilai Akhir: " << fixed << setprecision(2) << nilai_akhir << endl;
    cout << "Grade Nilai: " << grade << endl;

    return 0;
}
