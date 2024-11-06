#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
     set<pair<int, int>> s;
     multiset<pair<int, int>> ml;
    vector<int> ans;
    int numbPos = 1; 
    for (int i = 1; i <= q; i++)
    {
       int type;
      cin >> type;
        if (type == 1)
        {
            int money;
            cin >> money;
            s.insert({numbPos, money});
            ml.insert({money, -numbPos});
            numbPos++;
        }
       else if (type == 2)
        {
            int pos = s.begin()->first;
            int money = s.begin()->second;
            ans.push_back(pos);
            ml.erase({money, -pos});
            s.erase(s.begin());
        }
        else
        {
            int pos = -ml.rbegin()->second;
            int money = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos, money});
        }
    }
    for (auto &i : ans)
        cout << i << '\n';
    return 0;
}
