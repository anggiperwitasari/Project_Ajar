#include <iostream>
using namespace std;

int tambah(int a, int b) {
    return a + b; // Function
}

void cetakHasil(int hasil) {
    cout << "Hasil penjumlahan adalah: " << hasil << endl; // Procedure
}

int main() {
    int x = 10, y = 20;
    int hasil = tambah(x, y);
    cetakHasil(hasil);
    return 0;
}
