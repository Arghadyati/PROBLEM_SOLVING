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
        cin >> v[i];
    vector<int> v2;
    cout << v[n - 1] << " ";
    for (int i = 0; i < n - 1; i++)
    {
        cout << v[i] << " ";
    }
}
