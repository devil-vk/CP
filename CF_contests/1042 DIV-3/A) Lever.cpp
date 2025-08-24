#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n],brr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++) cin>>brr[i];
    int cnt=1;
    for(int i=0;i<n;i++){
        if(arr[i]>brr[i]) cnt+=(arr[i]-brr[i]);
    }
    cout<<cnt<<endl;

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t=1;
    cin>>t;
    while(t--){
        solve();
    } 

    return 0;
}
