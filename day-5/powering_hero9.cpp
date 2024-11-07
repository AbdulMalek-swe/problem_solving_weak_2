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
        cin>>n;
        vector<int> a;
        priority_queue<int> pq;
        long long int sum = 0;
       for(int i=0;i<n;i++){
        int x;
        cin>>x;
         if(x!=0){
            a.push_back(x);
            pq.push(x);
         }
         if(x==0){
        
            if(!pq.empty()){
                sum += pq.top();
                pq.pop();
               
            }
         }
       }
       
       cout<<sum<<'\n';
    }
    
    return 0;
}
