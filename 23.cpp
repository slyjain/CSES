#include<bits/stdc++.h>
using namespace std;
//#define ll long long
const int M=1e9+7;
typedef long long ll;
typedef vector<int > vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
int freq[int(2e5)+(10)];
int main()
{   
    ll n, x;
    cin>>n>>x;
    vector<int > a;
    for(ll i=0;i<n;i++){
        int k;
        cin>>k;
        a.push_back(k);
    }
    sort(a.begin(),a.end());
    ll gandola=0;
   for(int i=n-1;i>=0;i--){
    if(freq[i]==0){
        freq[i]=1;
    int index=i-1;
    while(index>-1){
        if(a[index]+a[i]<=x && freq[index]==0){
            break;
        }
        index--;
    }
    if(index!=-1){
        freq[index]=1;
        

    }
    
    gandola++;}

   }
   cout<<gandola<<endl;
    
    return 0;
}