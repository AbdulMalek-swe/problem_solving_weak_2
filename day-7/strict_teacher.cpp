#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    while (q--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> teacher;
        for (int i = 0; i < m; i++)
        {
            int t;
            cin >> t;
            teacher.push_back(t);
        }
        sort(teacher.begin(), teacher.end());
        while (k--)
        {
            int l;
            cin >> l;
            if (l < teacher[0])
            {
                cout << teacher[0] - 1 << endl;
                continue;
            }
            if (l > teacher[m - 1])
            {
                cout << n - teacher[m - 1] << endl;
                continue;
            }
            auto it = lower_bound(teacher.begin(), teacher.end(), l);
            auto kdv = it;
            kdv--;
            int left = *kdv, right = *it;
            int mid = (left + right) / 2;
            cout << min(abs(mid - left), abs(mid - right)) << endl;
        }
        
    }
    return 0;
}