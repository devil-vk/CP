#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define ll long long
#define endl '\n'

ll intpow(ll a, ll b){ll ans = 1; while(b){if(b & 1) ans *= a; a *= a; b /= 2;} return ans;}
ll modpow(ll a, ll b, ll p){ ll ans = 1; a %= p;if(a < 0) a += p;while(b){ if(b & 1) (ans *= a) %= p; (a *= a) %= p; b /= 2; } return ans; }

void solve(){
    ll n;cin>>n;
    ll ans=0,tmp=0;
    while(n){
        ll p=n%3;
        ans+=p*(intpow(3,tmp+1)+tmp*intpow(3,tmp-1));
        n/=3;tmp++;
    }
    cout<<ans<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
