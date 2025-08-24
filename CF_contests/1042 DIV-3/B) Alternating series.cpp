#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i+1==n && n%2==0) cout<<2<<" ";
        else if(i%2) cout<<3<<" ";
        else cout<<-1<<" ";
    }
    cout<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
