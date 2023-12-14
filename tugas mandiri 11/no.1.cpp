#include <stdio.h>

int main() {
  // Deklarasi array
  int A[12] = {0, 1, 60, 80, 2, 55, 3, 90, 4, 75, 5, 40};
  int B[12], C[12];

  // Hitung rata-rata nilai mahasiswa
  int total = 0;
  for (int i = 0; i < 12; i++) {
    total += A[i];
  }
  float rata_rata = (float)total / 12;

  // Pindahkan nilai ke array B atau C
  int indexB = 0;
  int indexC = 0;
  for (int i = 0; i < 12; i++) {
    if (A[i] > rata_rata) {
      B[indexB] = A[i];
      indexB++;
    } else {
      C[indexC] = A[i];
      indexC++;
    }
  }

  // Tampilkan isi array A, B dan C
  printf("Isi array A:\n");
  for (int i = 0; i < 12; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");

  printf("Isi array B:\n");
  for (int i = 0; i < indexB; i++) {
    printf("%d ", B[i]);
  }
  printf("\n");

  printf("Isi array C:\n");
  for (int i = 0; i < indexC; i++) {
    printf("%d ", C[i]);
  }
  printf("\n");

  return 0;
}

