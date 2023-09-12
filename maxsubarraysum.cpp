#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int sum = 0;
    int maxi = INT_MIN;
    for (auto it : v)
    {
        sum += it;
        maxi = max(maxi, sum);
        if (sum < 0)
            sum = 0;
    }
    cout << maxi;
}