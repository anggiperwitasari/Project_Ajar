/*create by: Anggi Perwitasari
create date: 20 Oktober 2021*/
#include <iostream>
using namespace std;

int main() {
    // Deklarasi array dengan 5 elemen
    int arr[5];

    // Input elemen array dari pengguna
    cout << "Masukkan 5 angka untuk mengisi array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    // Menampilkan elemen array
    cout << "\nElemen-elemen dalam array adalah:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemen ke-" << i + 1 << ": " << arr[i] << endl;
    }

    return 0;
}
