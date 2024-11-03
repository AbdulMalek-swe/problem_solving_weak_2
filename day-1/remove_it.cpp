// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
   int n;
   cin>>n;
   int k;
   cin>>k;
   vector<int>v;
   while(n--){
       int d;
       cin>>d;
       v.push_back(d);
   }
   for(auto value:v){
       if(value!=k){
           cout<<value<<" ";
       }
   }
   cout<<endl;
    return 0;
}