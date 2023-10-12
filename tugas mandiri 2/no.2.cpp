#include <stdio.h>
#include <math.h>

int main() {
    double diameter = 15.0; // Diameter bola dalam cm
    double jari_jari, volume;

    // Menghitung jari-jari bola
    jari_jari = diameter / 2.0;

    // Menghitung volume bola
    volume = (4.0 / 3.0) * M_PI * pow(jari_jari, 3);

    // Menampilkan hasil volume bola
    printf("Volume bola dengan diameter %.2lf cm adalah %.2lf cm^3\n", diameter, volume);

    return 0;
}

