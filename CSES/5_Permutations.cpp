#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define mod 1e9

void solve(){
    int n;
    cin>>n;
    if(n==1) cout<<n;
    else if(n<4) cout<<"NO SOLUTION";
    else{
        for(int i=1;i<=n;i++){
            if(i%2==0) cout<<i<<" ";
        }
        for(int i=1;i<=n;i++){
            if(i%2) cout<<i<<" ";
        }
    }

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}

// the above code is based on my simple logic


