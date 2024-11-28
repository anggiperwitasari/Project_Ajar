#include <iostream>
using namespace std;

class Kalkulator {
public:
    // Fungsi penjumlahan dua bilangan
    int tambah(int a, int b) {
        return a + b;
    }

    // Fungsi penjumlahan tiga bilangan
    int tambah(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Kalkulator k;

    cout << "Penjumlahan 2 angka: " << k.tambah(10, 20) << endl;
    cout << "Penjumlahan 3 angka: " << k.tambah(10, 20, 30) << endl;

    return 0;
}
