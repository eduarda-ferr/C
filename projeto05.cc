#include<iostream>
using namespace std;

int main() {
    int valor = 17;

    // Usando COUT
    cout << "Valor inicial: " << valor << "\n\n";

    valor = -valor;  // Transformando em negativo
    cout << "Valor negativo: " << valor << "\n\n";
    

    // Usando PRINTF
    printf("Valor inicial: %d\n\n", valor);

    valor = -valor;  // Transformando de volta em positivo
    printf("Valor positivo: %d\n\n", valor);

    return 0;
}
