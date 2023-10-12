#include <stdio.h>

int main() {
    double celcius, fahrenheit, reamur;

    // Input suhu dalam Celcius
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%lf", &celcius);

    // Menghitung suhu dalam Fahrenheit
    fahrenheit = (celcius * 9/5) + 32;

    // Menghitung suhu dalam Reamur
    reamur = celcius * 4/5;

    // Menampilkan hasil konversi suhu
    printf("%.2lf Celcius = %.2lf Fahrenheit\n", celcius, fahrenheit);
    printf("%.2lf Celcius = %.2lf Reamur\n", celcius, reamur);

    return 0;
}

