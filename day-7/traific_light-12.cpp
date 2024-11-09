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
        string str;
        char ch;
        int n;
        cin >> n >> ch;
        cin >> str;
        str += str;
        int l = str.length();
       set<int > pq;
        int mx = 0;
        for (int i = 0; i < l; i++)
        {
            if (str[i] == ch)
            {
                pq.insert(i);
            }
            else if (!pq.empty())
            {
                if (str[i] == 'g')
                {
                    // cout<<i<<"<---------->"<<*pq.rbegin()<<endl;
                    mx = max(mx, i-*pq.begin());
                     pq.clear();
                    
                }
                 
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
