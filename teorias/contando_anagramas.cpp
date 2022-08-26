#include <iostream>
using namespace std;
int fat(int);
int main(){
    string palavra;
    cin>>palavra;
    int t=palavra.length();
    char *pala=NULL;
    pala= new char[t];
    for(int i=0;i<t;i++){
        pala[i]=palavra[i];
    }
    int cont=0, fatorial=1;
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(palavra[j]=='*'){}
            else if(pala[i]==palavra[j]){
                cont++;
                palavra[j]='*';
            }
        }
        if(cont<2){cont=0;}
        else{
            fatorial=fatorial*fat(cont);
            cont=0;
        }
    }
    cout<<fat(t)/fatorial<<endl;
    delete [] pala;
    return 0;
}
int fat(int x){
    if(x==1){
        return 1;
    }
    else{
        return x*fat(x-1);
    }
}