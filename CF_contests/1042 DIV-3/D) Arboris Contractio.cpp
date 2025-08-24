#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define mod 1e9

int solve(){
    int n;
    cin>>n;
    vector<vector<int>>g(n);
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        --x;--y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    if(n==2) {
        return 0;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(g[i].size()==1) ans+=1;
    }
    int mx=0;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j:g[i]){
            cnt+=(int)(g[j].size()==1);
        }
        mx=max(mx,cnt);
    }
    return ans-mx;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        // solve();
        cout<<solve()<<endl;
    }
    return 0;
}



