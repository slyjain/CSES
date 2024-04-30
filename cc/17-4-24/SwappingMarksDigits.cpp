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
        ll a1,b1;
        cin>>a1>>b1;
        ll a2,b2;
        a2=(a1%10)*10+a1/10;
        b2=(b1%10)*10+b1/10;
        if(a1>b1||a1>b2||a2>b1||a2>b2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}