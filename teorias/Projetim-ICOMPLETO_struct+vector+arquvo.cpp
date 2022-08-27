/*
PROGRAMA INCOMPLETO!!!!. Falta salvar os dados de cada usuario em um txt.
Estudar registros para realizar esta tarefa.....
*/

#include <iostream>
#include <vector>
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
        cout<<"Seu nome: "; cin.ignore();getline(cin,usuario.user);
        cout<<"Quantidade de Livros: ";cin>>usuario.quantidade;
        for(int i=0;i<usuario.quantidade;i++){
            string ler; cout<<"Insira o "<<i+1<<"º: ";cin.ignore();getline(cin,ler);
            usuario.titulos.push_back(ler);
        }
        cout<<endl;
//INSERÇÂO EM ARQUIVOS.....
        cout<<"Click Y-for ADD new user or N-for exiting application"<<endl;
        cin>>control;
        system("clear");
    }while(control=='Y' or control=='y');
    return 0;
}