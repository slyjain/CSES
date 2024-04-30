#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M=1e9+7;
//typedef long long ll;
typedef vector<ll > vl;
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
        string s;
        cin>>s;

        ll n=s.length();
        ll upper=0,lower=0;
        ll cost=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='1')
            {   upper++;
            }
            else if(upper>0)
            {
                cost+=(upper+1);
                
            }
        }
        cout<<cost<<endl;
    }
    return 0;
}