#include<iostream>

using namespace std;

int main(){

    //(expressão) ?valor1:  valor:

    int n1,n2,nota;
    string restante;

    cout<<"digite a primeira nota: ";
    cin>>n1;

    cout<<"digite a segunda nota: ";
    cin>>n2;

    nota=n1+n2;

    //>=50
    //<50

    //(nota >=50) ? restante="aprovado" : restante="reprovado";

    restante=(nota >=50) ? "aprovado" : "reprovado";

    cout<<"situacao do aluno: "<<restante<<"\n";

    return 0;
}
