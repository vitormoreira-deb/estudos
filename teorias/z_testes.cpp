/*
PROGRAMA INCOMPLETO!!!!. Falta salvar os dados de cada usuario em um txt.
Estudadar registros para realizar esta tarefa.....
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
        cout<<"Seu nome: "; getline(cin,usuario.user);
        cout<<"Quantidade de Livros: ";cin>>usuario.quantidade;
        for(int i=0;i<usuario.quantidade;i++){
            cin.ignore();
            string ler; cout<<"Insira o "<<i+1<<"º: ";getline(cin,ler);
            usuario.titulos.push_back(ler);
        }
        cout<<endl;
//INSERÇÂO EM ARQUIVOS.....
        cout<<"Click Y-for ADD new user or N-for exiting application"<<endl;
        cin>>control;
        system("clear");
        cin.ignore();
    }while(control=='Y' or control=='y');
    return 0;
}