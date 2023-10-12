#include <stdio.h>
#include <math.h>

int main() {
    double sisi_alas, sisi_tinggi, sisi_miring;

    
    printf("Masukkan panjang sisi alas segitiga (dalam cm): ");
    scanf("%lf", &sisi_alas);
    printf("Masukkan panjang sisi tinggi segitiga (dalam cm): ");
    scanf("%lf", &sisi_tinggi);

    
    sisi_miring = sqrt(pow(sisi_alas, 2) + pow(sisi_tinggi, 2));

  
    printf("Panjang sisi miring segitiga: %.2lf cm\n", sisi_miring);

    return 0;
}

