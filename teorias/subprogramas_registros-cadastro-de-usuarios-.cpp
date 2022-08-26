/*
PROGRAMA DE CADASTRO DE USUARIOS
*/
#include <iostream>
using namespace std;
struct clientes{
    string nome;
    int idade;
    char sexo;
    void sexosigla(string orientacao){
        if(orientacao[0]=='F' or orientacao[0]=='f'){
            sexo='F';
        }
        else if(orientacao[0]=='M' or orientacao[0]=='m'){
            if(orientacao[1]=='u' or orientacao[1]=='U'){
                sexo='F';
            }
            else{
                sexo='M';
            }
        }
        else if(orientacao[0]=='H' or orientacao[0]=='h'){
            sexo='M';
        }
    }
};
int main(){
    int t;
    cout<<"Quantos usuarios vão se cadastrar? "; cin>>t;
    clientes usuarios[t];
    string sexo;
    for(int i=0;i<t;i++){
        system("clear");
        cout<<"Digite os dados do usuario nº"<<i+1<<": "<<endl;
        cout<<"Nome: "; cin>>usuarios[i].nome;
        cout<<"Idade: "; cin>>usuarios[i].idade;
        cout<<"Sexo: ";cin>>sexo;
        usuarios[i].sexosigla(sexo);
    }
    for(int i=0;i<t;i++){
        cout<<usuarios[i].nome<<endl;
        cout<<usuarios[i].idade<<endl;
        cout<<usuarios[i].sexo<<endl;
        cout<<"-------------------------"<<endl;
    }
    char buscar;
    cout<<"Insira um sexo M ou F para busca no BD: "; cin>>buscar;
    system("clear");
    for(int i=0;i<t;i++){
        if(usuarios[i].sexo==buscar){
            cout<<usuarios[i].nome<<endl;
            cout<<usuarios[i].idade<<endl;
            cout<<"-------------------------"<<endl;
        }
    }
    cout<<endl;
    return 0;
}