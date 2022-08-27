/*
PROGRAMA COMPLETOOOOOOOOOOOOOOOOOO
Le nome de novos clientes, a quantidade de livros e quais são eles
logo após esses dados são inseridos no banco de dados txt.
*/

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
struct biblioteca{
    string user;
    int quantidade;
    vector<string>titulos;

};
int main(){
    char control;
    do{
        biblioteca usuario;
        cout<<"Seu nome: "; getline(cin,usuario.user);
        cout<<"Quantidade de Livros: ";cin>>usuario.quantidade;
        cin.ignore();
        for(int i=0;i<usuario.quantidade;i++){
            string ler; cout<<"Insira o "<<i+1<<"º: ";getline(cin,ler);
            usuario.titulos.push_back(ler);
        }
        cout<<endl;
        //INSERÇÂO EM ARQUIVOS.....OK
        ofstream arq("BD.txt", ios::app);
        arq<<"Usuario: "<<usuario.user<<endl;
        arq<<"Quantidade de livros: "<<usuario.quantidade<<endl;
        int tam=usuario.titulos.size();
        int j=0;
        while(j<tam){
            arq<<"Titulo nº"<<j+1<<": "<<usuario.titulos[j]<<endl;
            j++;
        }
        arq<<"----------------------------------------------"<<endl;
        arq.close();
        cout<<"Click Y-for ADD new user or N-for exiting application"<<endl;
        cin>>control;
        system("clear");
        cin.ignore();
    }while(control=='Y' or control=='y');
    return 0;
}