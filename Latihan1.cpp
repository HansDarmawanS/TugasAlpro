#include <iostream>
#include <cmath>

int main() {
    double jariJari;
    const double PI = M_PI;

    std::cout << "Masukkan jari-jari lingkaran: ";
    std::cin >> jariJari;

    double luas = PI * pow(jariJari, 2);

    double keliling = 2 * PI * jariJari;

    std::cout << "Luas lingkaran: " << luas << std::endl;
    std::cout << "Keliling lingkaran: " << keliling << std::endl;

    return 0;
}