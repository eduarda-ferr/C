#include<iostream>
using namespace std;

int main(){

    string nome;
    int idd;

//com COUT
    cout<<"digite seu nome:";
    cin>> nome;
    cout<<"digite sua idade: ";
    cin>> idd;

    if (idd>=18) {

        cout<<"compre seu ingresso jovem";

    }else{

        cout<<"pare criança, va para casa";

    }

/* 
//com PRINTF
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idd);


    if (idd >= 18) {
        printf("Compre seu ingresso jovem");} 
    else {
        printf("Pare criança, vá para casa");}
*/
    
    return 0;
}