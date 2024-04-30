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
{   ll m,n,k;
    cin>>n>>m>>k;
    vi a,b;
    for(ll i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(ll i=0;i<m;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0;
    int count=0;
    while(i<n&&j<m){
        if(a[i]>=b[j]-k&&a[i]<=b[j]+k){
            i++;
            j++;
            count++;
        }
        else if(a[i]<b[j]-k){
            i++;
        }
        else{
            j++;
        }
    }
    cout<<count<<"\n";

    
    return 0;
}