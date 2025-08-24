#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    int m;
    cin>>m;
    string b,c;
    cin>>b>>c;
    for(int i=0;i<m;i++){
        if(c[i]=='V'){
            a=b[i]+a;
        }else{
            a+=b[i];
        }
    }
    cout<<a<<endl;
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
