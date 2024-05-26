#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> pre_gcd(n+1);
int max_gcd = INT_MIN;
    pre_gcd[0]=0;
    vector<int> suff_gcd(n+1);
    suff_gcd[n]=0;
    // cout<<suff_gcd[n]<<endl<<endl;
    for(int i=1;i<=n;i++){
        pre_gcd[i]=__gcd(pre_gcd[i-1],nums[i-1]);
        // cout<<"pre gcd is: "<<pre_gcd[i]<<endl;
        suff_gcd[n-i]=__gcd(suff_gcd[n-i+1],nums[n-i]);
        // cout<<"suff gcd is: "<<suff_gcd[n-i]<<endl;
    }
for (int i = 1; i <=n; ++i) {
		max_gcd = max(max_gcd,__gcd(pre_gcd[i-1],suff_gcd[i]));
	}
cout<<max_gcd;
return 0;
}