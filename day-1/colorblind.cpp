#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    while (n--)
    {
        string str1, str2;
        int k;
        cin >> k >> str1 >> str2;
        bool isFalse = true;
        for(int i = 0; i < k; i++){
             if(str1[i] == str2[i])
               {
                continue;
               }
               else if(str1[i]=='B' && str2[i]=='G'){
                continue;
               }
               else if(str2[i]=='B' && str1[i]=='G'){
            
                continue;
               }
               else {
                isFalse = false;
               }
        }
        if(isFalse){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
