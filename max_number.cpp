#include<iostream>
#include <climits>

using namespace std;

int main()
{
    int a[10];
    
    for(int i = 0 ; i<=10 ; i++){
       cin>>a[i];

    }

    int ans = INT_MAX;
    for(int i= 0;i<=10; i++)
    {
        if(a[i]<ans)
        ans = a[i];
    }
    cout<<ans<<endl;

    ans= INT_MIN;
    for(int i=0; i<=10; i++){
        if(a[i]>ans)
        ans = a[i];
    }

    cout<<ans;

};