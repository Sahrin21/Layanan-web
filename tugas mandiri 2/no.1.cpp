#include <stdio.h>

int main() {
    double panjang_alas = 8.0; // Panjang alas dalam cm
    double tinggi = 5.0;       // Tinggi dalam cm
    double luas;

    // Menghitung luas segitiga
    luas = 0.5 * panjang_alas * tinggi;

    // Menampilkan hasil luas segitiga
    printf("Luas segitiga dengan panjang alas %.2lf cm dan tinggi %.2lf cm adalah %.2lf cm^2\n", panjang_alas, tinggi, luas);

    return 0;
}

