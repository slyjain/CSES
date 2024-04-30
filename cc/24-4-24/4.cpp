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
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    ll n,k;
    cin>>n>>k;
    set<ll> s;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        s.insert(x%k);
    }
    vector<ll> v(k,0);
    for(auto i:s){
        v[i]++; 

    }
    ll first,last;
    for(ll i=0;i<k;i++){
        if(v[i]>0){
            first=i;
            break;
        }
    }
    for(ll i=k-1;i>=0;i--){
        if(v[i]>0){
            last=i;
            break;
        }
    }
    ll ans=last-first;
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k/2);
    reverse(v.begin()+k/2,v.end());
    ll ans1=0;
    for(ll i=0;i<k;i++){
        if(v[i]>0){
            first=i;
            break;
        }
    }
    for(ll i=k-1;i>=0;i--){
        if(v[i]>0){
            last=i;
            break;
        }
    }
    ans1=last-first;
    cout<<min(ans,ans1)<<"\n";
    }
    return 0;
}