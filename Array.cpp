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

    /* 	Pada dasarnya array multidimensi ini seperti Matriks
		Misalnya, array 2D dapat dianggap sebagai matriks dengan baris dan kolom, 
		di mana setiap elemen dapat diakses menggunakan dua indeks: 
		satu untuk baris dan satu untuk kolom.
	*/
	
	//	Array 2D
	int array2D[2][2] = {
		{1, 2},
		{3, 4}
	};
	
	cout << "array 2D :" << endl;
	cout << array2D[0][0] << " " << array2D[0][1] << endl;
	cout << array2D[1][0] << " " << array2D[1][1] << endl;
	
	cout << endl;

    return 0;
}
