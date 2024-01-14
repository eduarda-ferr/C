#include <iostream>

using namespace std;

int main(){

inicio:

    int transporte;
    int sub;
    cout<< "selecione o tipo de transporte:\n";
    cout<< "[1] aereo, [2] rodoviario, [3] hidroviario\n";
    cin>>transporte;

    switch (transporte){
        case 1:
            cout<<"Agora escolha as opcoes abaixo do tipo aereo: \n";
            cout<<"[1] aviao,[2] helicoptero \n";
            cin>>sub;
            switch(sub){
            case 1:
                cout<<"opcao selecionada: aviao\n";
                break;
            case 2:
                cout<<"opcao selecionada: helicoptero\n";
                break;
            }            
            break;
        case 2:
            cout<<"Agora escolha as opcoes abaixo do tipo roviario: \n";
            cout<<"[1] carro,[2] van, [3]onibus \n";
            cin>>sub;
            switch(sub){
            case 1:
                cout<<"opcao selecionada: carro\n";
                break;
            case 2:
                cout<<"opcao selecionada: van\n";
                break;
            case 3:
                cout<<"opcao selecionada: onibus\n";
                break;
            }                                    
            break;
        case 3:
            cout<<"Agora escolha as opcoes abaixo do tipo hidroviario: \n";
            cout<<"[1] lancha,[2] navio, [3] balsa\n";
            cin>>sub;
            switch(sub){
            case 1:
                cout<<"opcao selecionada: lancha\n";
                break;
            case 2:
                cout<<"opcao selecionada: navio\n";
                break;
            case 3:
                cout<<"opcao selecionada: balsa\n";
                break;
            }         
            break;
        default:
            cout<<"ERROR: valor selecionado invalido.Tente novamente\n\n";
                goto inicio;
        }
    return 0;
}