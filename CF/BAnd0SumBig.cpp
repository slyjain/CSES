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
        ll n,k;
        cin>>n>>k;
        ll ans=n;
        ans=ans%M;
        for(ll i=0;i<k-1;i++){
            ans=(ans*n)%M;
        }
        cout<<ans<<endl;
    }
    return 0;
}