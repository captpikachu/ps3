#include<bits/stdc++.h>
using namespace std;
bool isPossible(int mid,vector<int> & nums,int n){
int i =0;
int j =mid+i-1;
int prev =nums[0];
for(int i=0;i<=j;i++){
    prev = prev|nums[i];
}
i++;
j++;
int res=0;
int index =i;
while(j<n){
index = i;
while(index<=j){
    res = res|nums[index];
    index++;
}
if(res!=prev)
return false;
res =0;
i++;
j++;
}
return true;
}
int main()
{
int t;
cin>>t;
while(t){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
        int s = 1;
    int e = n;
    int mid = (s+e)/2;
    int ans =1;
    while(s<=e){
        // cout<<"current mid is: "<<mid<<endl;
        if(isPossible(mid,nums,n)){
            ans = mid;
            e = mid -1;
            mid = (s+e)/2;
        }
        else{
            s = mid+1;
            mid =(s+e)/2;
        }
    }
    t--;
    cout<<ans<<endl;
}

return 0;
}