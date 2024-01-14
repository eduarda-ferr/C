#include <iostream>

using namespace std;

int main(){

inicio:

    int valor;
    cout<< "selecione uma cor:\n";
    cout<< "[1] preto, [2] azul, [3] vermelho\n";
    cin>>valor;

    switch (valor){
        case 1:
            cout<<"Cor selecionada: verde.\n";
            break;
        case 2:
            cout<<"Cor selecionada: azul.\n";
            break;
        case 3:
            cout<<"Cor selecionada: vermelho\n";
            break;
        default:
            cout<<"ERROR: valor selecionado invalido.Tente novamente\n\n";
                goto inicio;
    }

    /*SINTAXE - switch (expressão){

    case const1:
        comandos;
        break;

    case const2:
        comandos;
        break;

    default:
        comandos;

    }*/

    return 0;
}