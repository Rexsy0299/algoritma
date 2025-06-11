#include <iostream> // Untuk cout, cin, endl

// Menggunakan namespace std agar tidak perlu menulis 'std::' berulang kali
using namespace std;

// Prototipe fungsi
// Fungsi tambah tidak mengembalikan nilai (void)
// Parameter dilewatkan sebagai pointer ke integer (int*)
void tambah(int *c, int *d);

int main() {
    int a, b;
    a = 4;
    b = 6;

    // clrscr(); // clrscr() adalah fungsi non-standar, hindari penggunaannya

    cout << "Nilai Sebelum Pemanggilan Fungsi";
    cout << "\na = " << a << " b = " << b;

    // Memanggil fungsi tambah, melewatkan alamat memori dari 'a' dan 'b'
    tambah(&a, &b); 
    cout << endl; // Baris baru untuk pemisah output

    cout << "\nNilai Setelah Pemanggilan Fungsi";
    cout << "\na = " << a << " b = " << b;

    // getch(); // getch() adalah fungsi non-standar.
              // Untuk menahan konsol, gunakan cin.get()
    cin.ignore(); // Membersihkan newline character yang mungkin tersisa
    cin.get();    // Menunggu input dari pengguna

    return 0; // Menandakan program berhasil dieksekusi
}

// Implementasi fungsi tambah
// Menerima pointer ke integer
void tambah(int *c, int *d) {
    // Mengakses nilai yang ditunjuk oleh pointer (*) dan memodifikasinya
    *c += 7; 
    *d += 5; 

    cout << "\nNilai di Akhir Fungsi Tambah()";
    cout << "\nc = " << *c << " d = " << *d;
}
