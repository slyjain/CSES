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
    ll ans=0;
    ll l,r;
    cin>>l>>r;
    ll msbl=__builtin_clzll(l);
    ll msbr=__builtin_clzll(r);
    msbl=63-msbl;
    msbr=63-msbr;
    ans=l^r;
    for(ll i=0;i<msbr;i++){
        ans|=(1LL<<i);
    }
    cout<<ans<<endl;
    return 0;
}