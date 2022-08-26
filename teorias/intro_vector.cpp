#include <iostream>
#include <vector>
using namespace std;
int main(){
    bool controle=true;
    char verifica;
    vector <string> nome;
    do{
        string user;
        cout<<"Insira nome: ";
        getline(cin, user);
        nome.push_back(user);
        cout<<"Deseja inserir novo nome? ";cin>>verifica;
        if(verifica=='S' or verifica=='s'){
            controle=true;
        }
        else{
            controle=false;
        }
        cin.ignore();
    }while(controle==true);
    cout<<"----------------------------------------"<<endl;
    int tam=nome.size();
    for(int i=0;i<tam;i++){
        cout<<nome[i]<<endl;
    }
    return 0;
}