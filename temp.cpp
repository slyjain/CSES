#include<bits/stdc++.h>
using namespace std;

int main()
{   vector<int>ans;
    int k=1;
    int n=10;
    int a[]={0,0,1,1,1,2,2,3,3,4};
    int i;
    for( i=0;i<n;){
        int x=a[i];
        ans.push_back(x);
        k++;
        while(x==a[i++]){
            
        }
    }
    ans.push_back(a[i]);
    cout<<k<<"\n";
    for( i=0;i<k;i++){
        cout<<ans[i];
    }
    return 0;
}