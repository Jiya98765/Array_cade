#include<iostream>
using namespace std;

int main()
{
    int a[10];
    cout<<sizeof(a)<<endl;
    cout<<sizeof(a[0])<<endl;
    
    cout<<sizeof(a)/sizeof(a[0]) ;
    for(int i= 0; i<=100; i++){
      cin>>a[i];

      cout<<a[i]<<" ";
    }


   

   

};
