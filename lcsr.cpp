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
int LCS(string s1, string s2,int i,int j){
    if(s1[i]=='\0'||s2[j]=='\0'){
        return 0;
    }
    else if(s1[i]==s2[j]){
        
        return 1+LCS(s1,s2,i+1,j+1);
    }
    else{
        return max(LCS(s1,s2,i+1,j),LCS(s1,s2,i,j+1));
    }
}
int main()
{
    string s1="stone",s2="longest";
    int n=s1.size();
    int n1=s2.size();
    int lcs=LCS(s1,s2,0,0);
    cout<<endl<<lcs;

    return 0;
}