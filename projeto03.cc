#include<iostream>
using namespace std;

int n1,n2; //variaveis globais

int main(){

    int n3,n4; //variaveis locais
    int resultado;

    n1=3;
    n2=5;
    n3=8;
    n4=1;

    resultado=n1+n2+n3+n4;

    cout <<"soma de todos os valores: "<<resultado << "\n\n"; //exemplo 1

    printf("soma de todos os valores: %d\n\n", resultado); // exemplo 2



    return 0;
}