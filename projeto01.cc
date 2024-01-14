#include <iostream>

using namespace std;

int main() {


    int vidas;   
    char letra;
    double decimal;
    float decimal2;
    bool vivo;

    cout << "quantidade de pessoas: ";
    cin >> vidas;
    cout << "diga uma letra: ";
    cin >> letra;
    cout << "O valor do numero: ";
    cin >> decimal;
    cout << "O valor do segundo numero: ";
    cin >> decimal2;
    cout << "valor booleano: ";
    cin >> vivo;

    cout<<"aqui estao seus dados..."<<'\n';

    cout<<vidas<<'\n';
    cout<<letra<<'\n';
    cout<<decimal<<'\n';
    cout<<decimal2<<'\n';
    cout<<vivo<<'\n';
    
   /*
    printf("%d\n",vidas);
    //inteiro
    printf("%c\n",letra);
    //caractere
    printf("%n\n",decimal2);
    //decimal
    printf("%n\n",decimal);
    //decimal
    printf("%s\n",vivo);
    //booleano
    */

    return 0;
}