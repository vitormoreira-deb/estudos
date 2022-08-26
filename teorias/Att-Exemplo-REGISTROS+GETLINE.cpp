#include <iostream>
#include <string>
using namespace std;
struct campos{
    int idade;
    float saldo;
    string nome;
    char sexo;
};
int main(){
    int t=3;
    campos elementos[t];
    for(int i=0; i<t;i++){
        cout<<"digite as info do user n"<<i+1<<": "<<endl;
        cout<<"Nome: ";getline(cin, elementos[i].nome);
        cout<<"Idade: ";cin>>elementos[i].idade;
        cout<<"Saldo: ";cin>>elementos[i].saldo;
        cout<<"Sexo: ";cin>>elementos[i].sexo;
        system("clear");
        cin.ignore();
    }
    string muda;
    cout<<"Digite qual informação deseja mudar em todo o BD: ";cin>>muda;
    if(muda=="nome"){
         cin.ignore();
        for(int i=0; i<t; i++){
            cout<<"Nome do user n"<<i+1<<": ";
            getline(cin, elementos[i].nome);
        }
    }
    else if(muda=="idade"){
        for(int i=0;i<t;i++){
            cout<<"Idade do user n"<<i+1<<": ";cin>>elementos[i].idade;
             system("clear");
        }
    }
    else if(muda=="saldo"){
        for(int i=0;i<t;i++){
            cout<<"Saldo do user n"<<i+1<<": ";cin>>elementos[i].saldo;
             system("clear");
        }
    }
    else if(muda=="sexo"){
        for(int i=0;i<t;i++){
            cout<<"Sexo do user n"<<i+1<<": ";cin>>elementos[i].sexo;
             system("clear");
        }
    }
    cout<<"<<<IMPRESSÃO FINAL DO BD......."<<endl;
    for(int i=0; i<t;i++){
        cout<<elementos[i].nome<<endl;
        cout<<elementos[i].idade<<endl;
        cout<<elementos[i].saldo<<endl;
        cout<<elementos[i].sexo<<endl;
        cout<<"-------------------------"<<endl;
    }
    return 0;
}