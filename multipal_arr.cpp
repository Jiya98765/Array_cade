#include<iostream>
using namespace std;

int main(){
    int a[2][2];
    for(int i=0 ;i<=1;i++){
        for(int j=0; j<=1;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0 ;i<=1;i++){
        for(int j=0; j<=1;j++){
            cout<<a[i][j] <<" ";
        }
        cout<<" "<<endl;
    }
    

}