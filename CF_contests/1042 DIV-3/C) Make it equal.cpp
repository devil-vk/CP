#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]%=k;
        a[i]=min(a[i],k-a[i]);
    }
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
        b[i]%=k;
        b[i]=min(b[i],k-b[i]);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a==b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
