#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (auto &val : v)
        cin >> val;
    map<int, int> cnt;
    vector<int> k(n);
    for (int i = n - 1; i >= 0; --i)
    {
        cnt[v[i]]++;
        k[i] = cnt.size();
    }
    while (m--)
    {
        int f;
        cin >> f;
        map<int, int> cnt;
        cout << k[f - 1] << endl;
    }
    return 0;
}