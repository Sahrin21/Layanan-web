#include <stdio.h>

int main() {
  // Deklarasi array
  char A[11] = {'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T', 'A'};

  // Inisialisasi variabel
  int frekuensi[26] = {0};
  int max_frekuensi = 0;
  char huruf_terbanyak = '\0';

  // Hitung frekuensi kemunculan setiap huruf
  for (int i = 0; i < 11; i++) {
    if (A[i] >= 'A' && A[i] <= 'Z') {
      frekuensi[A[i] - 'A']++;
    }
  }

  // Cari huruf dengan frekuensi terbanyak
  for (int i = 0; i < 26; i++) {
    if (frekuensi[i] > max_frekuensi) {
      max_frekuensi = frekuensi[i];
      huruf_terbanyak = i + 'A';
    }
  }

  // Tampilkan hasil
  if (huruf_terbanyak != '\0') {
    printf("Huruf yang paling banyak muncul adalah %c dengan frekuensi %d\n", huruf_terbanyak, max_frekuensi);
  } else {
    printf("Tidak ada huruf kapital dalam array A.\n");
  }

  return 0;
}

