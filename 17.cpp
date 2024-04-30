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
    vector<ll>a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    int b1=0,b2=0;
    for(int i=0;i<n;++i){
        b1+=a[i];
        //cout<<b1<<"-b1-"<<i<<"\n";
        while(b1-b2>0&& ++i<n){
            b2+=a[i];
            //cout<<b2<<"-b2-"<<i<<"\n";
                    }
    }
    cout<<abs(b1-b2);
    return 0;
}