#include <iostream>
using namespace std;

/*
Kerjakanlah Tugas Berikut !
1.Buatlah aplikasi menghitung luas dan keliling Persegi Panjang !
2.Buatlah aplikasi menghitung luas dan keliling Lingkaran !
*/

int main () {
    cout << "1. luas dan keliling Persegi Panjang" << endl;
    int panjang, lebar;
    cout << "Panjang : "; cin >> panjang;
    cout << "Lebar : "; cin >> lebar;
    cout << "Luas persegi panjang adalah : " << panjang * lebar << " cm" << endl;
    cout << "Keliling persegi panjang adalah : " << (panjang + lebar) * 2 << " cm" << endl << endl;

    cout << "2. luas dan keliling Lingkaran" << endl;
    int jari;
    const float phi = 3.14;
    cout << "Jari : "; cin >> jari;
    cout << "Luas lingkaran adalah : " << phi * jari * jari << " cm" << endl;
    cout << "Keliling lingkaran adalah : " << 2 * (phi * jari) << " cm";
}