#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M=1e9+7;
//typedef long long ll;
typedef vector<int > vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair

int main()
{
     ll t;
     cin>>t;
     while(t--){
        ll n;
        cin>>n;
        vector<ll>v;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            v.PB(x);
        }
        ll count[64]={0};
        for(ll i=0;i<n;i++){
            ll x=__builtin_clzll(v[i]);
            count[x]++;
        }
        ll ans=0;
        for(ll i=0;i<64;i++){
            ans+=count[i]*(count[i]-1)/2;
        }
        cout<<ans<<endl;
     }
    return 0;
}