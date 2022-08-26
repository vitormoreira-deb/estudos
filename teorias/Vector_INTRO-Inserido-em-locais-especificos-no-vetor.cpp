#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> x;
    vector <int>::iterator it;
    x.push_back(1);
    x.push_back(3);
    x.push_back(7);
    x.push_back(9);
    it=x.begin()+2;
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<endl;
    }
    cout<<"---------------------"<<endl;
    x.insert(it,5);
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<endl;
    }
    return 0;
}