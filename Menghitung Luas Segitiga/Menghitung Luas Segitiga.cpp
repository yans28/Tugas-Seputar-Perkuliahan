#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    cout << "NIM : " << endl;
    cout << "Nama : " << endl;
    cout << "Kelas : " << endl;
    cout << "======================================" << endl;
    cout << "" << endl;
    int alas, tinggi, luas;

    cout << "Masukkan alas" << endl;
    cin >> alas;
    cout << "Masukkan tinggi" << endl;
    cin >> tinggi;
    luas = (int) ((double) 1 / 2 * alas * tinggi);
    cout << "Hasil luas segitiga adalah = " << luas << "cm" << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
