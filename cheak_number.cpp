#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,4,9,6,7,78,8,9};
    int num = 5;
    int index = -1;
    for(int i=0 ; i<=9; i++){
        if(arr[i]==num){
            index = i;
            break;
        }
  }
cout<<index;
    
}
