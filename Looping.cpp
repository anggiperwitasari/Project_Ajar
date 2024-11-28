#include <iostream>
using namespace std;

int main() {
    // For loop
    cout << "Loop For:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }

    // While loop
    cout << "\nLoop While:" << endl;
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        j++;
    }

    // Do While loop
    cout << "\nLoop Do While:" << endl;
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);

    return 0;
}
