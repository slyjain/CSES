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
    while(n--){
        ll k;
        cin>>k;
        ll a;
        cin>>a;
        for(int i=1;i<k;i++){
            int x;
            cin>>x;
            a&=x;
        }
        cout<< a <<endl;
    }
    return 0;
}