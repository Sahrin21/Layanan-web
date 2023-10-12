#include <stdio.h>
#include <math.h>

int main() {
    double sisi_alas = 4.0; // Panjang sisi alas dalam cm
    double sisi_tinggi = 5.0; // Panjang sisi tinggi dalam cm
    double sisi_miring;

    // Menghitung sisi miring (hipotenusa) menggunakan rumus Pythagoras
    sisi_miring = sqrt(pow(sisi_alas, 2) + pow(sisi_tinggi, 2));

    // Menampilkan hasil panjang sisi miring
    printf("Panjang sisi miring segitiga adalah %.2lf cm\n", sisi_miring);

    return 0;
}

