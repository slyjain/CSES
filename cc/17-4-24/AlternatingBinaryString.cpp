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
        ll prev=s[0];
        int flag=0;
        ll count=0;
        for(ll i=1;i<n;i++){
            if(flag==0&&s[i]==prev){
                flag=1;
                count++;
                
            }
            else if(flag==1&&s[i]!=prev){
                flag=0;
                

            }
            else if(flag==1&&s[i]==prev){
                flag=0;
                count++;
            }
            else if(flag==0&&s[i]!=prev){
                flag=0;
            }
            
            
            prev=s[i];
        }
        cout<<count<<"\n";
    }
    return 0;
}