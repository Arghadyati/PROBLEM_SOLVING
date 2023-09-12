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
    vector<int> dp(n, INT_MAX);
    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i <= j + v[j])
                dp[i] = min(dp[i], dp[j] + 1);
        }
    }
    cout << dp[n - 1];
}