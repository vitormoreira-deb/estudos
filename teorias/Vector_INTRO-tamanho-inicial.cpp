#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t=6;
    vector<int> x(t);
    cout<<"INI>> "<<x.size()<<endl;
    for(int i=1;i<t;i++){
        cin>>x[i];
    }
    char veri;
    system("clear");
    do{
        cout<<"Quer adicionar mais algum valor? Y or N  "; cin>>veri;
        if(veri=='Y' or veri=='y'){
            cout<<"----dado dinamico"<<endl;
            cin>>x[0];
            x.push_back(x[0]);
            system("clear");
        }
    }while(veri=='Y' or veri=='y');
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" | ";
    }
    cout<<endl;
    cout<<"FIN>> "<<x.size()<<endl;
    cout<<endl;

    return 0;
}