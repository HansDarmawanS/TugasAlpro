#include <iostream>

// Fungsi untuk menghitung faktorial
long long hitungFaktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        long long hasil = 1;
        for (int i = 2; i <= n; ++i) {
            hasil *= i;
        }
        return hasil;
    }
}

int main() {
    // Meminta pengguna memasukkan angka
    std::cout << "Masukkan angka untuk menghitung faktorial: ";
    int angka;
    std::cin >> angka;

    // Memastikan angka tidak negatif
    if (angka < 0) {
        std::cerr << "Angka tidak boleh negatif." << std::endl;
        return 1;
    }

    // Menghitung faktorial menggunakan fungsi
    long long hasilFaktorial = hitungFaktorial(angka);

    // Menampilkan hasil faktorial dengan notasi perkalian
    std::cout << angka << "! = ";
    for (int i = angka; i > 1; --i) {
        std::cout << i << " x ";
    }
    std::cout << "1 = " << hasilFaktorial << std::endl;

    return 0;
}