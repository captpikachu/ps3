#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
vector<int> slices(n);
for(int i=0;i<n;i++){
    cin>>slices[i];
}

auto it = slices.begin();
auto prev = slices.begin();
it++;
while(it!=slices.end())
{
if(*prev-*it>m)
*it = *prev-m;
it++;
prev++;}
it--;
prev = it;
it--;
while(it!=slices.begin()){
if(*prev-*it>m)
*it = *prev-m;
it--;
prev--;
}
if(*prev-*slices.begin()>m)
*slices.begin()=*prev-m;
for(auto it = slices.begin();it!=slices.end();it++){
    cout<<*it<<" ";
}
return 0;
}