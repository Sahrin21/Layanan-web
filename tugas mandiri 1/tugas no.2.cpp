#include <stdio.h>

int main() {
	// Deklarasi variabel panjang dan lebar
	double panjang = 10.0; 
	double lebar = 7.0;
	
	// Menghitung  luas persegi panjang
	double luas = panjang * lebar;
	
	// Menampilkan hasil perhitungan di layar
	printf("Panjang: %.2f cm\n", panjang);
	printf("Lebar: %.2f cm\n", lebar);
	printf("Luas Persegi Panjang: %.2f cm\n", luas);
	
	return 0;
}
