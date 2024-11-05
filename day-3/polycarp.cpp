#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    int n;
    cin >> n;
    multiset<int> s; 
    while (n--) {
        int x;
        cin >> x;
        s.insert(x);
    }
    int i=0; 
     for(auto it = s.begin(); it!= s.end(); ++it) {
        if(i<*it){
            i++;
        }
     }
     cout << i;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);

//    int n;
//    cin >> n;
//    multiset<int> ml;
//    for (int i = 0;i < n;i++) {
//       int x;
//       cin >> x;
//       ml.insert(x);
//    }

//    int ans = 0, problems = 1;
//    while (!ml.empty()) {
//       auto LB = ml.lower_bound(problems);
//       if (LB != ml.end()) {
//          ans++;
//          ml.erase(LB);
//       }
//       else {
//          break;
//       }
//       problems++;
//    }

//    cout << ans << '\n';

//    return 0;
// }


