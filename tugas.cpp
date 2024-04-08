#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    float pilihan, panjang, lebar, jari;
    const float phi = 3.14;
menu:
    cout << "================" << endl;
    cout << "1. Menghitung luas dan keliling Persegi Panjang" << endl;
    cout << "1. Menghitung luas dan keliling Lingkaran" << endl;
    cout << "3. Exit/Keluar" << endl;
    cout << "================" << endl;
    cout << "Masukkan angka pilihan anda = ";
    cin >> pilihan;
    system("cls");

    if (pilihan == 1)
    {
        cout << "Masukkan nilai panjang \t\t= ";
        cin >> panjang;
        cout << "Masukkan nilai lebar \t\t= ";
        cin >> lebar;
        cout << "Luas persegi panjang \t\t= " << panjang * lebar << endl;
        cout << "Keliling persegi panjang \t= " << 2 * (panjang + lebar) << endl;
        goto menu;
    }
    else if (pilihan == 2)
    {
        cout << "Masukkan nilai jari-jari \t= ";
        cin >> jari;
        cout << "Luas lingkaran \t\t\t= " << phi * jari * jari << endl;
        cout << "Keliling lingkaran \t\t= " << 2 * phi * jari << endl;
        goto menu;
    }
    else if (pilihan == 3)
    {
        cin.ignore();
    }
    else
    {
        cin.ignore();
        cout << "Pilihan salah, silahkan tekan enter untuk melanjutkan";
        cin.get();
        system("cls");
        goto menu;
    }
}