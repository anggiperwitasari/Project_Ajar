#include <stdio.h>

int tambah(int a, int b) {
    return a + b; // Function
}

void cetakHasil(int hasil) {
    printf("Hasil penjumlahan adalah: %d\n", hasil); // Procedure
}

int main() {
    int x = 10, y = 20;
    int hasil = tambah(x, y);
    cetakHasil(hasil);
    return 0;
}
