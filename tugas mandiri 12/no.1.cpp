#include <stdio.h>
#include <stdbool.h>

int main() {
  // Deklarasi array
  char A[8] = {'J', 'A', 'K', 'A', 'R', 'T', 'A'};

  // Inisialisasi variabel
  bool ada = false;
  char huruf_sama = '\0';

  // Periksa isi array
  for (int i = 0; i < 8; i++) {
    for (int j = i + 1; j < 8; j++) {
      if (A[i] == A[j]) {
        ada = true;
        huruf_sama = A[i];
        break;
      }
    }

    if (ada) {
      break;
    }
  }

  // Tampilkan hasil
  if (ada) {
    printf("ADA, huruf yang sama adalah %c\n", huruf_sama);
  } else {
    printf("TIDAK ADA\n");
  }

  return 0;
}

