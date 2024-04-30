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
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n+1);
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
            
        }
        ll flag=0;
        for(ll i=1;i<=n;i++)
        {   ll j=a[i];
        
        
            if(a[j]==i)
            {
                cout<<2<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<3<<endl;
        }
    }
    return 0;
}