#include <iostream> // Untuk cout, cin
#include <string>   // Untuk std::string
#include <cstring>  // Untuk strcpy (meskipun std::string lebih disarankan)

// Menggunakan namespace std agar tidak perlu menulis 'std::' berulang kali
using namespace std; 

// Prototipe fungsi
// Fungsi ini mengisi string 'ket' berdasarkan nilai 'n' (ganjil/genap)
// Menggunakan char* dan char[] untuk mempertahankan struktur asli Anda
void coment(char ket[], int n); 

int main() {
    char lagi;
    char c[30]; // Array karakter untuk menyimpan komentar
    int i;

atas: 
    // clrscr(); // clrscr() adalah fungsi non-standar, hindari penggunaannya

    cout << "Masukkan nilai = ";
    cin >> i;

    // Memanggil fungsi coment
    coment(c, i); 
    
    // Menampilkan hasil komentar
    cout << "Komentar: " << c << endl; 

    cout << "Ulang lagi (Y/T)? ";
    cin >> lagi;

    if (lagi == 'Y' || lagi == 'y') {
        goto atas; 
    } else {
        // Membersihkan newline character yang tersisa dari input sebelumnya
        cin.ignore(); 
        // Menunggu input karakter sebelum program berakhir
        cin.get();    
    }

    return 0; 
}

// Blok program fungsi coment
// Parameter 'ket' adalah array karakter yang akan diisi
void coment(char ket[], int n) { 
    int a;
    a = n % 2; // Menghitung sisa bagi n dengan 2

    if (a == 1) { // Jika sisa baginya 1, berarti ganjil
        strcpy(ket, "---Bilangan Ganjil---");
    } else { // Jika sisa baginya 0, berarti genap
        strcpy(ket, "---Bilangan Genap---");
    }
}

