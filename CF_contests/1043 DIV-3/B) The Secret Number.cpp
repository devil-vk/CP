#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=10;i<=n;i*=10){
        if(n%(i+1)==0){
            v.push_back(n/(i+1));
        }
    }
    reverse(v.begin(),v.end());
    cout<<v.size()<<endl;
    for(auto x:v){
        cout<<x<<" ";
    }
    if(v.size()) cout<<endl;    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
