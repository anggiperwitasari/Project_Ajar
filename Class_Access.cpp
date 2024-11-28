#include <iostream>
using namespace std;

class Contoh {
private:
    int a; // Hanya bisa diakses dalam kelas ini

protected:
    int b; // Bisa diakses oleh kelas turunan

public:
    int c; // Bisa diakses di mana saja

    void setA(int nilai) { a = nilai; }
    int getA() { return a; }
};

class Turunan : public Contoh {
public:
    void setB(int nilai) { b = nilai; }
    int getB() { return b; }
};

int main() {
    Contoh obj;
    obj.c = 10; // Public
    obj.setA(20); // Mengatur private menggunakan fungsi public
    cout << "Nilai A (private): " << obj.getA() << endl;
    cout << "Nilai C (public): " << obj.c << endl;

    Turunan objTurunan;
    objTurunan.setB(30); // Akses protected melalui turunan
    cout << "Nilai B (protected): " << objTurunan.getB() << endl;

    return 0;
}
