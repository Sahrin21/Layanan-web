#include <stdio.h>

int main() {
    int jam_masuk, jam_pulang, lama_kerja;
    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jam_masuk);
    printf("Masukkan jam pulang (1-12): ");
    scanf("%d", &jam_pulang);
    if (jam_masuk >= 1 && jam_masuk <= 12 && jam_pulang >= 1 && jam_pulang <= 12) {
        if (jam_pulang >= jam_masuk) {
            lama_kerja = jam_pulang - jam_masuk;
        } else {
            lama_kerja = (12 - jam_masuk) + jam_pulang;
        }

        printf("Lama kerja pegawai: %d jam\n", lama_kerja);
    } else {
        printf("Input tidak valid. Pastikan jam masuk dan jam pulang dalam rentang 1-12.\n");
    }

    return 0;
}

