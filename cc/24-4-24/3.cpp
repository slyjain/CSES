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
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll sum=0;
        for(ll i=0;i<k;i++){
            if(a[i]<=3){
                sum+=(7-a[i]);
            }
            else{
                sum+=a[i];
            }
        }
        for(ll i=k;i<n;i++){
            sum+=a[i];
        }
        cout<<sum<<"\n";
    }
    return 0;
}