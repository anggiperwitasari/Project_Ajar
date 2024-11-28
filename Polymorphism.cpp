#include <iostream>
using namespace std;

class Hewan {
public:
    virtual void suara() { // Virtual function
        cout << "Hewan membuat suara." << endl;
    }
};

class Kucing : public Hewan {
public:
    void suara() override { // Override fungsi suara
        cout << "Kucing berkata: Meow!" << endl;
    }
};

class Anjing : public Hewan {
public:
    void suara() override { // Override fungsi suara
        cout << "Anjing berkata: Woof!" << endl;
    }
};

int main() {
    Hewan* hewan1;  // Pointer ke kelas induk
    Kucing kucing;
    Anjing anjing;

    hewan1 = &kucing;
    hewan1->suara(); // Polymorphism: panggil fungsi suara() Kucing

    hewan1 = &anjing;
    hewan1->suara(); // Polymorphism: panggil fungsi suara() Anjing

    return 0;
}
