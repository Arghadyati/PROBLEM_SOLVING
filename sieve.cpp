#include <iostream>
#include<vector>
using namespace std;
//sieve of eratosthenes
int main()
{
   int n;
   cin>>n;
   vector<int>v(n+1,1);
   v[1]=0;
   for(int i=2;i<=n;i++){
       if(v[i]==0)continue;
       for(int j=2*i;j<=n;j+=i){
           v[j]=0;
       }
   }
   for(int i=1;i<=n;i++){
       cout<<v[i]<<" ";
   }
    return 0;
}
