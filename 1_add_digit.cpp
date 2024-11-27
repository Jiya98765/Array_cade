#include<iostream>
using namespace std;
int main()
{ 
    int number ;
    cout<<"enter a number:";
    cin>>number;

    while(number>9){
    int ans =0 ,remider;
       while(number =! 0){
        remider = number % 10;
        number /= 10;
        ans = ans + remider;

    }
    number = ans;
}
    cout<<number;
};