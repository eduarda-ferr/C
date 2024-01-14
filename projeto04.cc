#include<iostream>
using namespace std;

int main() {

    int n1, n2;

    n1 = 4;
    n2 = 5;

    cout << n1 << "\n";
    cout << n2 << "\n";

    cout << "Incremento de n2: " << ++n2 << "\n"; //incremento
    cout << "Decremento de n1: " << --n1 << "\n"; //decremento

    // Operações de atribuição

    n1 += 2;
    cout << "n1 += 2: " << n1 << "\n";

    n1 -= 2;
    cout << "n1 -= 2: " << n1 << "\n";

    n1 *= 2;
    cout << "n1 *= 2: " << n1 << "\n";

    n1 /= 2;
    cout << "n1 /= 2: " << n1 << "\n";

    return 0;
}