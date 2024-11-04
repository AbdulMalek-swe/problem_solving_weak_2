#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
     int n;
     cin>>n;
     while (n--){
        int a,b;
        cin>>a>>b;
        string str;
        map<char,int>mp;
        cin>>str;
        for(int i=0;i<a;i++){
            mp[str[i]]++;
        }
        int ans = 0;
        for(auto value : mp){
            if(value.second %2==1){
                ans++;
            }
        }
         int cnt = ans-b;
         if( cnt<=1){
             cout<<"YES\n";
         }else{
             cout<<"NO\n";
         }
     }
    return 0;
}