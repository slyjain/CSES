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
    ll n;
    cin>>n;
    ll ans=0;
    while(n/5>0){
        ans+=n/5;
        n/=5;
    }
    cout<<ans;
    return 0;
}