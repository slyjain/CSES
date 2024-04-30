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
    int t;
    cin>>t;
    while(t--)
    {int n,x,y;
    cin>>n>>x>>y;
    vi a(n);
    int sumMin=0;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp*x>=y){
            sumMin+=y;
        }
        else{
            sumMin+=temp*x;
        }
    }
    cout<<sumMin<<"\n";
    }
    return 0;
}