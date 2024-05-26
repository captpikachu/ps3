#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t){
    int n;
    cin>>n;
    int i =0;
    int j =  n-1;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int max =INT_MIN;
    auto begin = nums.begin();
    begin++;
    auto end = nums.end();
    end--;
    while(i<=j-2){
        int maxi = *max_element(begin,end);
        // cout<<maxi<<endl;
        int sum = nums[i]+maxi+nums[j];
        // cout<<"sum of "<<nums[i]<<" "<<maxi<<" "<<nums[j]<<" is "<<sum<<endl;
        int diff = j-i;
        // cout<<"diff is "<<diff<<endl;
        int val = sum-diff;
        // cout<<"val is "<<val<<endl;
        if(nums[i]<nums[j])
        {i++;
        begin++;}
        else{
            j--;
            end--;
        }
        if(val>max)
        max = val;
    }
    cout<<max<<endl;
t--;
}

return 0;
}