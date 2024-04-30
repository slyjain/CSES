#include<iostream>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    if(n==3){
        cout<<"YES"<<endl<<1<<endl<<3<<endl<<2<<endl<<2<<" "<<1;
    }
    else if(n%4==1||n%4==2){
        cout<<"NO";
    }
    else if(n%4==0){
        cout<<"YES"<<endl;
        cout<<n/2<<endl;
        ll i;
        for(i=1;i<=n/4;i++){
            cout<<i<<" "<<n-i+1<<" ";

        }

        cout<<endl<<n/2<<endl;
        for(;i<=n/2;i++){
            cout<<i<<" "<<n-i+1<<" ";

        }
    }
    else{
        cout<<"YES"<<endl;
        int k=(n-3)/4;
        cout<<2*k+2<<endl<<1<<" "<<2<<" ";
        ll i=1;
        for(i;i<=k;i++){
            cout<<4*i<<" "<<4*i+3<<" ";
        }
        cout<<2*k+1<<endl<<3<<" ";
        
        for(i=1;i<=k;i++){
            cout<<4*i+1<<" "<<4*i+2<<" ";
        }
    }
    return 0;
}