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
int countDigits(int n){
	//whats wrong with this code?
    //it is not counting the last digit of the number
    //it is not checking if the last digit is zero or not
    //why? the reason is that the loop is running till n/10>0
    //then
	int x=n;
	int count=0;
	int i;
	while(float(n/10)!=0){
		 i=n%10;
		if(i!=0 && x%i==0){
			count++;
		}
		n=n/10;
	}	
	return count;
    
}
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    return 0;
}