#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main(){
    vector<int> vetornum;
    string palavra;
    cin>>palavra;
    for(int n:palavra){
        if(n=='0' or n=='1' or n=='2' or n=='3' or n=='4' or n=='5' or n=='6' or n=='7' or n=='8' or n=='9'){
            vetornum.push_back((int(n)-48));
        }
    }
    for(int n:vetornum){
        cout<<n<<" || ";
    }
    cout<<endl;
    cout<<"Tamanho do vetor numerado>> "<<vetornum.size();
    cout<<endl;
    return 0;
}