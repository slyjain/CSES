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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll cnt=0;
        ll flag=0;
        vector<ll>v;
        ll prev=s[0];
        for(ll i=0;i<n;i+=2){
            if(s[i]==s[i+1]){
                continue;
            }
            while(i<n&&s[i]!=s[i+1]){
                    flag=1;
                    if(s[i]==prev){
                        prev=s[i+1];
                        
                        
                        v.PB(i+2);
                    }
                    else{
                        prev=s[i];
                        v.PB(i+1);
                    }
                    i+=2;
                }
            
            
    }
    if(flag==0){
        cout<<0<<endl;
    }
    else{
        cout<<v.size()<<endl;
        for(ll i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    
    }
    return 0;
}