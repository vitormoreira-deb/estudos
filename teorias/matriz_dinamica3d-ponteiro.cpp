#include <iostream>
using namespace std;
int main(){
    int*** M=NULL;//3
    M=new int**[3];//cada 1 tem 3;
    for(int i=0;i<3;i++){
        M[i]=new int*[2];
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            M[i][j]=new int[2];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                cout<<M[i][j][k];
            }
            cout<<endl;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            delete[] M[i][j];
        }
        delete[] M[i];
    }
    delete[]M;
    return 0;
}