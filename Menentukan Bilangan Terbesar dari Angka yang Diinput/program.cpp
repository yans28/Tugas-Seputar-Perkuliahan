#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    if (a > b)
        cout << "Bilangan terbesar adalah: " << a << endl;
    else if (b > a)
        cout << "Bilangan terbesar adalah: " << b << endl;
    else
        cout << "Bilangan-bilangan tersebut sama." << endl;

    return 0;
}