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
        priority_queue<int> pq; 
        for (int i = 1; i <= n; ++i) {
            pq.push(i);
        }
        vector<pair<int, int>> ans;
        while (pq.size() > 1) {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            ans.push_back({a, b});
             
            int new_value = (a + b + 1) / 2;   
            if(pq.size()==0){
                cout<<new_value<<endl;
            }
            pq.push(new_value);
        }
    
        for (const auto& p : ans) {
            cout << p.first << " " << p.second << '\n';
        }
    }
    return 0;
}
