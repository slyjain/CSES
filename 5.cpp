#include<iostream>
using namespace std;
#define ll long long 
int main()
{   ll n;
cin>>n;
if(n==1)
    {
        cout<<1;
    }
else if(n==2||n==3){
    cout<<"NO SOLUTION";

}
else if(n==4){
    cout<<"3 1 4 2";
}
else if(n>4){
    ll k=n-1;
    for(ll i=n;i>0;i-=2){
        cout<<i<<" ";
    }
    for(ll i=k;i>0;i-=2){
        cout<<i<<" ";
    }
    
}
    return 0;
}