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
{   ll n;
cin>>n;
while(n--){
    ll x;
    cin>>x;
    ll i=0;
    ll handler;
    while(x>0){
        handler=9*(i+1)*pow(10,i);
        x-=handler;
    //    cout<<x<<"-x\n";
    //     cout<<handler<<"-handler\n";
        i++;
    }
    
    //cout<<i<<"-i\n";
    x+=handler;
    // cout<<x<<"-x\n";
    // cout<<(ceil(x/i))<<"-ceil x/i\n";
    ll from_pow=(long long)(ceil(x/i));
    //cout<<from_pow<<"-from_pow\n";
    ll index=x%i;
    //cout<<index<<"-index\n";
    
    x=from_pow+pow(10,i-1)-1;
    //cout<<x<<"-x\n";
    string ans=to_string(x);
    
    //cout<<ans<<"-ans\n";
    if(index-1<0){
        cout<<ans[i-1]<<"\n";
        //<<"-ans[i-1]";
    }
    else{cout<<ans[index-1]<<"\n";
    //<<"-ans[index-1]\n"
    }

}    
    return 0;
}