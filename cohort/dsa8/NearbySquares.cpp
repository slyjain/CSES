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
ll n;
#define int long long int
vector<ll>v;
ll sumall=0;
ll f(int i,int suma){
    if(i==n){
        ll sumb=sumall-suma;
        return abs(suma*suma-sumb*sumb);
    }
            return min(f(i+1,suma+v[i]),f(i+1,suma));
}
signed main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            
            v.PB(x);
        }
        sumall=accumulate(v.begin(),v.begin()+n,0);
        cout<<f(0,0)<<"\n";
}
    return 0;
}