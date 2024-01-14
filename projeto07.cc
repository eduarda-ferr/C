#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int n1, n2, n3, n4, res;
    char opc;

    inicio:

    system("cls");

    // Solicitar notas
    cout << "Digite a nota da 1ª avaliação: ";
    cin >> n1;
    cout << "Digite a nota da 2ª avaliação: ";
    cin >> n2;
    cout << "Digite a nota da 3ª avaliação: ";
    cin >> n3;
    cout << "Digite a nota da 4ª avaliação: ";
    cin >> n4;

    // Calcular a pontuação total
    res = (n1 * 2) + (n2 * 3) + (n3 * 2) + (n4 * 3);

    // Verificar a situação do aluno
    if (res >= 50) {
        cout << "Aluno aprovado!\n";
    } 
    
    else if (res >= 30 && res < 50) {
        cout << "Aluno em recuperação de notas.\n";
    } 
    
    else {
        cout << "Aluno reprovado.\n";
    }

    // Exibir pontuação
    cout << "Pontuação total: " << res << "\n\n";

    // Modificar as notas?
    cout << "Modificar as notas? [s/n]: ";
    cin >> opc;

    if (opc == 's' || opc == 'S') {
        goto inicio; // Retornar ao início para modificar as notas
    }
    
    return 0;
}
