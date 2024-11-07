#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int q;
    cin >> q;
    
    while (q--) {
        int n;
        cin >> n;
        vector<int> a(n);
        set<int> s;
         
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            s.insert(a[i]);
        } 
        int left = 0, right = n - 1; 
        while (left <= right) {
            int mx = *s.rbegin();
            int mn = *s.begin(); 
            if (mn == a[left] || mx == a[left]) {  
                s.erase(a[left]);
                left++;
            } 
            else if (mn == a[right] || mx == a[right]) {
                s.erase(a[right]);
                right--;
            } 
            else {
                break;
            }
        }
        
        if (left >= right) 
            cout << "-1" << endl;
        else 
            cout << left + 1 << " " << right + 1 << endl;  
    }
    
    return 0;
}
