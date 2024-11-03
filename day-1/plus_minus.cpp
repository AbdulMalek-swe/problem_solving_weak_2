#include <bits/stdc++.h>
using namespace std;
char plusMinus(int a,int b,int c){
           if(a-b==c){
            return '-';
           }else{
            return '+';
 
           }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    while (n--)
    {
         int a,b,c;
    cin>>a>>b>>c;
    cout<<plusMinus(a,b,c)<<"\n";
    }
    
    

    return 0;
}
