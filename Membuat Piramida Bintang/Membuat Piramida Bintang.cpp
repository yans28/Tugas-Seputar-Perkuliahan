#include <iostream>

using namespace std;
	
int main() {
    int n;
	
	//start biodata
    cout << "Nama : " << endl;
    cout << "NIM : " << endl;
	cout << "Mata Kuliah : " << endl;
	cout << "Dosen Pengampu : " << endl;
	cout << "Nama Program : " << endl;
	cout << "______________________________________________________" << endl;
	cout << "" << endl;
	//end biodata
	
	//start input data
    cout << "Masukkan jumlah baris : "; //NIM Akhir Mahasiswa
    cin >> n;
    cout << "" << endl; 
	//end input data
	
	//start program
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (n - i); j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
	//end program
	
    return 0;
}

