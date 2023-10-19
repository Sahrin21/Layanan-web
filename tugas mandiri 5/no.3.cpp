#include <stdio.h>

int main() {
    int jam_masuk, jam_keluar, lama_parkir, biaya;

    printf("Masukkan jam masuk: ");
    scanf("%d", &jam_masuk);

    printf("Masukkan jam keluar: ");
    scanf("%d", &jam_keluar);

    
    lama_parkir = jam_keluar - jam_masuk;

    if (lama_parkir <= 2) {
        biaya = 2000;
    } else {
        biaya = 2000 + 500 * (lama_parkir - 2);
    }

    printf("Jam masuk: %d, Jam keluar: %d, Lama parkir: %d jam, Biaya parkir: %d\n", jam_masuk, jam_keluar, lama_parkir, biaya);

    return 0;
}

