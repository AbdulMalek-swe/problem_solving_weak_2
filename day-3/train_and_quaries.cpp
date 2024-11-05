#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        map<int, set<int>> b;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;

            b[x].insert(i);
        }
        for (int i = 1;i <= m;i++) 
        {
            int k, l;
            cin >> k >> l;
            if ((b.find(k) == b.end()) || (b.find(l) == b.end()))
            {
                cout << "NO\n";
            }
            else
            {
                int str, end;
                str = *b[k].begin();
                end = *b[l].rbegin();
                if (str < end)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    }

    return 0;
}
