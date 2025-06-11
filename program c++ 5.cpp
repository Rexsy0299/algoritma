#include <iostream> // Untuk cout, cin, endl
#include <cmath>    // Opsional, untuk konstanta M_PI jika diperlukan presisi lebih tinggi

// Menggunakan namespace std agar tidak perlu menulis 'std::' berulang kali
using namespace std;

// Fungsi untuk menghitung luas lingkaran
// Menerima jari-jari (r) sebagai integer, mengembalikan float
float luas(int r) {
    // Bisa juga menggunakan M_PI dari <cmath> untuk presisi lebih tinggi:
    // return (M_PI * r * r);
    return (3.14 * r * r); 
}

// Fungsi untuk menghitung keliling lingkaran
// Menerima jari-jari (r) sebagai integer, mengembalikan float
float kel(int r) {
    // return (2 * M_PI * r);
    return (3.14 * 2 * r);
}

int main() {
    int j; 

    // clrscr(); // clrscr() adalah fungsi non-standar, hindari penggunaannya

    cout << "Masukkan Jari-jari = ";
    cin >> j;

    cout << "Luas lingkaran = " << luas(j) << endl;
    cout << "Keliling lingkaran = " << kel(j);

    // getch(); // getch() adalah fungsi non-standar.
              // Untuk menahan konsol, gunakan cin.get()
    cin.ignore(); // Membersihkan newline character yang mungkin tersisa
    cin.get();    // Menunggu input dari pengguna

    return 0; // Menandakan program berhasil dieksekusi
}
