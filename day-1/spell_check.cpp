#include <bits/stdc++.h>
using namespace std;
char plusMinus( string str)
{
    string st = "Timru";
    if (st == str)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    
    while (n--)
    {
        int k;

        string str;
        cin >> k >> str;
        sort(str.begin(), str.end());
        plusMinus(str);
    }

    return 0;
}
