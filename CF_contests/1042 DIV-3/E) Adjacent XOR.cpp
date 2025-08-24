#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    if(a[n-1]!=b[n-1]){
        cout<<"NO"<<endl;
        return;
    }
    bool ok=false;
    for(int i=n-2;i>=0;i--){
        if(a[i]==b[i]||(a[i]^a[i+1])==b[i]||(a[i]^b[i+1])==b[i]){
            ok=true;
        }else{
            ok=false;
             cout<<"NO"<<endl;
            return;
        }
    }
    cout<<(ok?"YES":"NO")<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
