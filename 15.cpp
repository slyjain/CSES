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
void TOH(int a, int b, int c, int n){
    if(n>0){
        TOH(a,c,b,n-1);
        cout<<a<<" "<<c<<"\n";
        TOH(b,a,c,n-1);
    }
}
int main()
{
    ll n;
    cin>>n;
    cout<<pow(2,n)-1<<"\n";
    TOH(1,2,3,n);
    return 0;
}