
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

    // Write your code here.
    //this is a simple problem of reversing the bits of a number
    //we can do this by shifting the bits of the number to the right and then oring it with the result
    //this will give us the reversed bits of the number
    //but it is not working for 12 the output is coming 15

    long reverseBits(long n) {
    // Write your code here.
   long k=0;
    for(int i=0;i<32;i++){
        long x=1<<31-i;
        x&=n;
        x=x>>(31-i);
        x=x<<i;
        k+=x;
    }
    return k;
    
}

int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    cout<<reverseBits(t);
    return 0;
}