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
int alpha[26];
int main()
{
    string s;
    cin>>s;
    vector<char>a(s.size());
    for(ll i=0;i<s.size();i++){
        alpha[s[i]-'A']++;
    }ll j=0;
    int odder=1;bool flag=1;
    for(ll i=0;i<26;i++){
        if(alpha[i]%2==1&& odder==1){
            a[s.size()/2]='A'+i;
            odder=0;
            alpha[i]--;
        }
        else if(alpha[i]%2==1&& odder==0){
            cout<<"NO SOLUTION";
flag=0;
            break;;
        }
        while(alpha[i]/2>0){
            a[j]=a[s.size()-1-j]='A'+i;
            j++;
            alpha[i]-=2;
        }
    }
   if(flag){ for(ll i=0;i<a.size();i++){
        cout<<a[i];
    }}
    return 0;
}