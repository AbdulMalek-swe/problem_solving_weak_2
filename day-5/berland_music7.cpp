#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while (q--) {
        int n;
        cin >> n;
        
        map<int, int> mp1, mp2;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        string s;
        cin >> s;
 
        vector<int> zeros, ones;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                zeros.push_back(v[i]);
            } else {
                ones.push_back(v[i]);
            }
        }
        sort(zeros.begin(), zeros.end());
        sort(ones.begin(), ones.end());
 
        int counter = 1;
        for (int x : zeros) {
            mp1[x] = counter++;
        } 
        for (int x : ones) {
            mp2[x] = counter++;
        } 
        for (auto &x : v) {
            if (mp1.count(x)) {
                cout << mp1[x] << " ";
            } else {
                cout << mp2[x] << " ";
            }
        }
        cout << endl;  
    }
    return 0;
}
