#include<iostream>
using namespace std;
#define ll long long
int main()
{ll n;
cin>>n;
ll t;
cin>>t;
ll ans=0;
for(ll i=1;i<n;i++){
ll x;
cin>>x;
if(t-x>0){
    ans+=(t-x);
    
}
t=max(x,t);

}
cout<<ans;
    
    return 0;
}