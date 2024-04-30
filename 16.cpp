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
ll factorial(ll j){
    if(j==0||j==1){
        return 1;
    }
    return j*factorial(j-1);
}
int main()
{  
ll a[26]={0};
ll dis=0;
string s;
cin>>s;
sort(s.begin(),s.end());
for(ll i=0;i<s.size();i++){
    
        a[s[i]-'a']++;
        
    }

ll fac1=factorial(s.size());
for(ll i=0;i<26;i++){
    if(a[i]>0){
        fac1/=factorial(a[i]);
    }    
    }
    cout<<fac1<<"\n";
    do{
        cout<<s<<"\n";
    }while(next_permutation(s.begin(),s.end()));
    return 0;
}