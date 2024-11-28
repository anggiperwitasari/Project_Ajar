#include <iostream>
using namespace std;

class Kendaraan {
public:
    virtual void jenis() = 0; // Pure virtual function
};

class Mobil : public Kendaraan {
public:
    void jenis() override {
        cout << "Saya adalah Mobil." << endl;
    }
};

class Motor : public Kendaraan {
public:
    void jenis() override {
        cout << "Saya adalah Motor." << endl;
    }
};

int main() {
    Kendaraan* k1; // Pointer ke interface
    Mobil mobil;
    Motor motor;

    k1 = &mobil;
    k1->jenis();

    k1 = &motor;
    k1->jenis();

    return 0;
}
