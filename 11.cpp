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
        ll a, b;
        cin>>a>>b;
        ll m=max(a,b);
        ll mi=min(a,b);
        if((a+b)%3==0 && m<=2*mi){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}