#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define ll long long
#define endl '\n'
ll intpow(ll a, ll b){ll ans = 1; while(b){if(b & 1) ans *= a; a *= a; b /= 2;} return ans;}
ll modpow(ll a, ll b, ll p){ ll ans = 1; a %= p;if(a < 0) a += p;while(b){ if(b & 1) (ans *= a) %= p; (a *= a) %= p; b /= 2; } return ans; }

void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        ll ans=intpow(i,2)*(intpow(i,2)-1)/2;
        ans-=(4*(i-1)*(i-2));
        cout<<ans<<endl;
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

/*
  Logic:
  total n*n board lo n^2 cells untai
  so (n^2)C2 = n^2(n^2-1)/2 possibilities of placing 2 knights - (no of ways of placings which they attack ) == our required ans
  selecting 2*3 and 3*2 rectangles from the n*n matrix => (n-2) *(n-1) ways and (n-1)*(n-2) ways respectively 
  so for selecting rectangles 2*(n-1)*(n-2) ways
  and in each rectangle we can place 2 knights in 2 ways (i.e 2 diagonal end positions) such that they attack each other
  so total ways of attacking positions = 4*(n-1)*(n-2) ways 
  hence we got the formula and substitute it 
*/
