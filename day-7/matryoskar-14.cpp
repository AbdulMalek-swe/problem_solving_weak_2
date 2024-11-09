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
        int n;
        cin >> n;
        vector<int> arr;
        map<int, int> result;
        for (int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
            result[x]++;
        }
        sort(arr.begin(), arr.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int value = arr[i];
            if (result[arr[i]] != 0)
            {
                ans++;

                while (result[value] > 0)
                {
                     result[value]--;
                    value++;
                   
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
