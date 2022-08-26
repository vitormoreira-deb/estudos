#include <iostream>
#include <vector>
using namespace std;
struct pontos{
    float x;
    float y;
    void transfer(float p, float q){
        x=p;
        y=q;
    }
    void distancia(float p, float q){
        cout<<" "<<p-x<<","<<q-y;
    }
};
int main(){
    pontos valores;
    vector<float> x(1);
    vector<float> y;
    while(x.size()<=10){
        cin>>x[0];
        x.push_back(x[0]);
        cin>>x[0];
        y.push_back(x[0]);

    }
    x.erase(x.begin());
    cout<<"<<< AS DISTANCIAS SAO... >>>>"<<endl;
    for(int i=0;i<x.size();i++){
        valores.transfer(x[0],y[0]);
        valores.distancia(x[i],y[i]);
    }
    cout<<endl;
    return 0;
}
