#include <iostream> // Untuk std::cout dan std::endl
#include <string>   // Tidak wajib untuk contoh ini, tapi sering digunakan
// #include <conio.h> dan #include <stdio.h> tidak umum lagi di C++ modern untuk hal dasar seperti ini

// Pembuatan fungsi garis()
void garis() { // Gunakan 'void' karena fungsi ini tidak mengembalikan nilai
    std::cout << "\n----------------------\n";
}

// Program utama
int main() { // Fungsi utama harus mengembalikan 'int'
    // clrscr(); // clrscr() adalah fungsi non-standar, tidak disarankan di C++ modern

    garis(); // Memanggil fungsi garis
    std::cout << "AMIK BSI - Pondok Labu" << std::endl;
    garis(); // Memanggil fungsi garis

    // getche(); // getche() adalah fungsi non-standar.
                // Untuk menahan konsol, bisa pakai cin.get() atau system("pause") (tidak disarankan)
    std::cin.get(); // Menunggu input karakter sebelum program berakhir
    
    return 0; // Menandakan program berhasil dieksekusi
}
