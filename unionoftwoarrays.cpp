#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n,m;
cin>>n>>m;
vector<int>a(n);
vector<int>b(m);
set<int>s;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<m;i++){
    cin>>b[i];
}
for(auto it:a){
    s.insert(it);
}
for(auto it:b){
    s.insert(it);
}
cout<<s.size();
}