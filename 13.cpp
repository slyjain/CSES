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
void bintodec(int number,int n)
{   int k=pow(2,n);
    for(int i=0;i<n;i++){
        k=k>>1;
        int a=(number&k)/k;
        cout<<a;
    }
}
int main()
{
    ll n;
    cin>>n;
    int rec=pow(2,n);
    for(int i=0;i<rec;i++){
        int xorer=i>>1;
        int ans=i^xorer;
        bintodec(ans,n);
        cout<<"\n";
    }
    return 0;
}