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
const ll Max=2e5+10;

int main()
{   ll n;
cin>>n;  
ll count =1;
vector<int>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int same=v[0];
    for(int i=1;i<n;i++){
        if(same!=v[i]){
            same=v[i];
            count++;
        }
    }
    cout<<count<<"\n";
    
    return 0;
}