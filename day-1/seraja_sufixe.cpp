#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    deque<int> v(n);
    for (auto &val : v)
        cin >> val; 
    for (int i = 0; i < n; i++)
    {  
        int cnt=0;
        for(int j = i+1; j < n; j++){
            if(v[i]!=v[j]){
                cnt++;
            }
        }  
        cout<<cnt<<endl;
    }
   
    return 0;
}
