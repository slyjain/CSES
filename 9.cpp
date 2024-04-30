#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M=1e9+7;
int main()
{ ll n;
cin>>n;
int i=1;
for(int k=0;k<n;k++){
    i=(i*2)%M;
}
cout<<i;
    
    return 0;
}