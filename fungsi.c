#include <stdio.h>

// Fungsi untuk menghitung rata-rata
float hitungRataRata(int nilai1, int nilai2) {
    return (nilai1 + nilai2) / 2.0;
}

// Fungsi untuk menampilkan hasil kelulusan
void tampilkanHasil(char nama[], float rata2) {
    printf("\nNama: %s\n", nama);
    printf("Rata-rata: %.2f\n", rata2);
    
    if (rata2 >= 60) {
        printf("Status: LULUS\n");
    } else {
        printf("Status: TIDAK LULUS\n");
    }
}

int main() {
    char nama[50];
    int nilai1, nilai2;
    float rata2;

    // Input data
    printf("Masukkan nama: ");
    scanf(" %[^\n]", nama); // input string dengan spasi
    printf("Masukkan nilai pertama: ");
    scanf("%d", &nilai1);
    printf("Masukkan nilai kedua: ");
    scanf("%d", &nilai2);

    // Hitung rata-rata
    rata2 = hitungRataRata(nilai1, nilai2);

    // Tampilkan hasil
    tampilkanHasil(nama, rata2);

    return 0;
}
