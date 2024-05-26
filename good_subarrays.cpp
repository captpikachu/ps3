#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++){
int n;
cin>>n;
string str;
cin>>str;
map<int,long long> sum_count;
vector<int> psum(n+1);
for(int i=1;i<=n;i++){
psum[i]=str[i-1]-'0';
}
for(int i=1;i<=n;i++){
    psum[i]+=psum[i-1];
}
for(int i=0;i<=n;i++){
    sum_count[psum[i]-i]++;
}
long long good_arrays=0;
for(auto it=sum_count.begin();it!=sum_count.end();it++){
    good_arrays+=it->second*(it->second-1)/2;
}
cout<<good_arrays<<endl;

}
return 0;
}