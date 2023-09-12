#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k, n;
    cin >> k >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = v[n - 1] - v[0];
    int largest = v[n - 1] - k;
    int smallest = v[0] + k;
    int ma, mi;
    for (int i = 0; i < n - 1; i++)
    {
        mi = min(smallest, v[i + 1] - k);
        ma = max(largest, v[i] + k);
        if (mi < 0)
            continue;
        ans = min(ans, ma - mi);
    }
    cout << ans << endl;
}
