#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define mod 1e9
 
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int cnt=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) {
            cnt+=(arr[i]-arr[i+1]);
            arr[i+1]=arr[i];
        }
    }
    cout<<cnt;
}
 
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}
