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
    while (t--)
    {     
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll flag=0;
        ll min=a[0];
        if(a[0]!=a[n-1]){
            flag=1;
            goto label;

        }
        
        for(ll i=1;i<n-1;i++){
            if(a[i]<min){
                flag=1;
                break;
            }
            
        }
        
        
      label:  if(flag==0){
            cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
    }
    
    return 0;
}