#include <iostream>
using namespace std;

class Hewan {
public:
    void makan() {
        cout << "Hewan sedang makan." << endl;
    }
};

class Kucing : public Hewan { // Inheritance
public:
    void meong() {
        cout << "Kucing berkata: Meow!" << endl;
    }
};

int main() {
    Kucing k;
    k.makan();  // Dari class Hewan
    k.meong();  // Dari class Kucing
    return 0;
}
