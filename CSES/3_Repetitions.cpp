#include<bits/stdc++.h>
using namespace std;
 
int solve(string s,int n){
    if(n<=1) return n;
    int cnt=1,ans=0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]) cnt++;
        else cnt=1;
        
        if(cnt>ans) ans=cnt;
    }
    return ans;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    string s;
    cin>>s;
    int len=s.length();
    cout<<solve(s,len);
    
    return 0;
}
