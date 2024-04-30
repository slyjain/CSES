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
{   ll n,m;
cin>>n>>m;
vector<ll>h,t;
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    h.push_back(x);
}
for(ll i=0;i<m;i++){
    ll x;
    cin>>x;
    t.push_back(x);
}
//5 3
//5 3 7 8 5
//4 8 3
sort(h.begin(),h.end());
sort(t.begin(),t.end());
ll i=0,j=0;
while(i<n&& j<m){
    while(t[j]<h[i]&&i<n&&j<m){
        cout<<"-1\n";
        j++;
    }
    while(t[j]>=h[i]&&i<n&&j<m){
        i++;
    }
    i--;
    cout<<h[i]<<"\n";
    i++;
    j++;

}
while(j<m){
    cout<<"-1\n";
}
    
    return 0;
}