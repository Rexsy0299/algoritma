#include <iostream> // Untuk cout, cin, endl

// Menggunakan namespace std agar tidak perlu menulis 'std::' berulang kali
using namespace std;

// Prototipe fungsi
// Fungsi tambah tidak mengembalikan nilai, jadi tipenya 'void'
// Parameter dilewatkan secara nilai (pass-by-value)
void tambah(int m, int n);

int main() {
    int a, b;
    a = 5;
    b = 9;

    // clrscr(); // clrscr() adalah fungsi non-standar, hindari penggunaannya

    cout << "Nilai Sebelum Fungsi Digunakan ";
    cout << "\na = " << a << " b = " << b;

    // Memanggil fungsi tambah dengan 'a' dan 'b'
    // Perubahan pada 'm' dan 'n' di dalam fungsi tidak akan memengaruhi 'a' dan 'b'
    tambah(a, b); 

    cout << "\nNilai Setelah Fungsi Digunakan";
    cout << "\na = " << a << " b = " << b;

    // getch(); // getch() adalah fungsi non-standar.
              // Untuk menahan konsol, gunakan cin.get()
    cin.ignore(); // Membersihkan newline character yang mungkin tersisa
    cin.get();    // Menunggu input dari pengguna

    return 0; // Menandakan program berhasil dieksekusi
}

// Implementasi fungsi tambah
void tambah(int m, int n) {
    m += 5; // m (salinan dari a) bertambah 5
    n += 7; // n (salinan dari b) bertambah 7

    cout << "\n\nNilai di dalam Fungsi Tambah()";
    cout << "\nm = " << m << " n = " << n;
    cout << endl; // Mencetak baris baru
}
