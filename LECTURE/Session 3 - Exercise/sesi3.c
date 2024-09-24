#include <stdio.h>
#define PI 3.14

void penjumlahan(void);
void suhu(void);
void kurs(void);
void lingkaran(void);

int main() {
    int pilihan;
    
    do {
        printf("\nPilih operasi:\n");
        printf("1. Penjumlahan\n");
        printf("2. Konversi Suhu\n");
        printf("3. Konversi Kurs\n");
        printf("4. Hitung Luas Lingkaran\n");
        printf("0. Keluar\n");
        printf("Masukkan pilihan (0-4): ");
        scanf("%d", &pilihan);
        
        switch (pilihan) {
            case 0:
                printf("Terima kasih telah menggunakan program ini.\n");
                break;
            case 1:
                penjumlahan();
                break;
            case 2:
                suhu();
                break;
            case 3:
                kurs();
                break;
            case 4:
                lingkaran();
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
    } while (pilihan != 0);
    
    return 0;
}

void penjumlahan(void) {
    int num1, num2;
    printf("Masukkan dua angka: ");
    scanf("%d %d", &num1, &num2);
    printf("Hasil: %d\n", num1 + num2);
}

void suhu(void) {
    float cel, kel;
    printf("Masukkan suhu dalam Celsius: ");
    scanf("%f", &cel);
    kel = cel + 273.15;
    printf("Suhu dalam Kelvin: %.2f\n", kel);
}

void kurs(void) {
    double idr, usd;
    printf("Masukkan jumlah IDR: ");
    scanf("%lf", &idr);
    usd = idr / 15223.75;
    printf("Hasil konversi ke USD: %.2lf\n", usd);
}

void lingkaran(void) {
    float r, luas;
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &r);
    luas = PI * r * r;
    printf("Luas lingkaran: %.2f\n", luas);
}
