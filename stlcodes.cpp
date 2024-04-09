#include <bits/stdc++.h>
using namespace std;
bool comp(int a,int b){
    return (a>b);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // vectors
    /*
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(4);
    cout << v.size() << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    v.pop_back();
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), greater<int>());
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    vector<int> v1(v.begin(), v.end());
    for (auto it : v1)
    {
        cout << it << " ";
    }
    cout << endl;
    reverse(v.begin(), v.end());
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    */

    // SET in c++
    /*
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(2);
    st.insert(3);
    for (auto it : st)
    {
        cout << it << " ";
    }
    cout << "\n";

    auto it = st.find(2);
    cout << *it << endl;

    st.erase(it);
    for (auto it : st)
    {
        cout << it << " ";
    }
    cout << endl;

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);

    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;
    */

   //Map
   /*
   map<int,int>mp;
   vector<int>vec={1,1,2,3,4,5,6,7,2,2,3,3,3,4,4,4,5,5,6};
   for(int i=0;i<vec.size();i++){
    mp[vec[i]]++;
   }
   for(auto it:mp){
    cout<<it.first<<" "<<it.second;
    cout<<endl;
   }
   auto it=mp.find(3);
   cout<<it->second<<endl;
   */

   //unordered_map<int,int>mp;

   //Stack in c++

   /*
   stack<int>st;
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);
   st.push(5);
   while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
   }
   cout<<"\n";
   
   */

//    queue<int>q;
//    q.push(1);
//    q.push(2);
//    q.push(3);
//    q.push(4);
//    q.push(5);

//    while(!q.empty()){
//     cout<<q.front()<<" ";
//     q.pop();
//    }


vector<int>arr={1,2,3,3,3,4,5,6,7,8};
auto it=upper_bound(arr.begin(),arr.end(),3);
int ind=it-arr.begin();
cout<<ind-1<<endl;
auto it1=lower_bound(arr.begin(),arr.end(),3);
int ind1=it1-arr.begin();
cout<<ind1<<endl;


vector<int>vec={1,2,3,4,5};
sort(vec.begin(),vec.end(),comp);
for(auto it:vec){
    cout<<it<<" ";
}
cout<<endl;

pair<int,int>pr=make_pair(1,2);
cout<<pr.first<<" "<<pr.second;
}
