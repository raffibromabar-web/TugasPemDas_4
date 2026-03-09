#include <iostream>
using namespace std;

void inputData(float &berat, float &tinggi){
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

float hitungBMI(float berat, float tinggi){
    return berat / (tinggi * tinggi);
}

string tentukanStatus(float bmi){
    
}