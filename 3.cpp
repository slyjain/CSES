#include<iostream>
using namespace std;
#define ll long long 
int main()
{   string s;
cin>>s;
char a=s[0];
ll c=0;
ll maxi=0;
for(char d:s){
    if(d==a){
        c++;
        maxi=max(c,maxi);
        
    }
    else{
        a=d;
        c=1;
    }
}
cout<<maxi;
    
    return 0;
}