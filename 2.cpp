#include<iostream>
using namespace std;
#define ll long long
int main()
{   ll n;
cin>>n;
    ll sum=0;
    for(ll i=0;i<n-1;i++){
        ll x;
        cin>>x;
        sum+=x;

    }
    ll ans=(n*(n+1)/2)-sum;
    cout<<ans;
    
    return 0;
}