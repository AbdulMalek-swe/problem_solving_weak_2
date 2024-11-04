#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    int n;
    while(n--){
         int k;
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++){
         cin>>arr[i];
    }
    for(int i=0;i<k;i++){
          int a;
          cin>>a;
          string str;
          cin>>str;
          int count = arr[i];
          for(auto ch:str){
               if(ch=='D'){
                if(count==9){
                    count = 0;
                }else{
                    count++;
                }
            }
            if(ch=='U'){
                if(count==0){
                    count = 9;
                }else{
                    count--;
                }
            }
          }
          cout<<count<<" ";
    }
    cout<<endl;
    }
   
    
    return 0;
}