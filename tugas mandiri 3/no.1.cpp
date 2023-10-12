#include <stdio.h>
#include <math.h>

int main() {
    double panjang_alas, tinggi;
    double luas, keliling;

    
    printf("Masukkan panjang alas segitiga (dalam cm): ");
    scanf("%lf", &panjang_alas);
    printf("Masukkan tinggi segitiga (dalam cm): ");
    scanf("%lf", &tinggi);

    
    luas = 0.5 * panjang_alas * tinggi;

    
    double hipotenusa = sqrt(pow(panjang_alas, 2) + pow(tinggi, 2));

    
    keliling = panjang_alas + tinggi + hipotenusa;

    
    printf("Luas segitiga: %.2lf cm^2\n", luas);
    printf("Keliling segitiga: %.2lf cm\n", keliling);

    return 0;
}

