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
int LCS(string s1, string s2){
    int n1=s1.size();
    int n2=s2.size();
    int size=0;
    string lcs="";
    
    
    vector<vector<int>>table(n1+1,vector<int>(n2+1));
    for(int i=0;i<=n1;i++){
        for(int j=0;j<=n2;j++){
            if(i==0||j==0){
                table[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1]){
                
                table[i][j]=1+table[i-1][j-1];
            }
            else{
                table[i][j]=max(table[i-1][j],table[i][j-1]);
            }
        }
    }
    int i=n1,j=n2;
    while(i>0&&j>0){
        if(s1[i-1]==s2[j-1]){
            lcs.push_back(s1[i-1]);
            i--;
            j--;
        }
        else if(table[i][j-1]<table[i-1][j]){
            i--;
        }
        else{
            j--;
        }
    }
    reverse(lcs.begin(),lcs.end());
    cout<<lcs<<endl;
    return table[n1][n2];
}
int main()
{
    cout<<LCS("stone","longest")<<endl;
    return 0;
}