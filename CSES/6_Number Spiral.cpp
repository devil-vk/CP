#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define mod 1e9

int solve(){
    int y,x;
    cin>>x>>y;
    int l=max(x,y)-1;
  // the main part of the code is to remember or derive the mathematical formula 
  // even no's squares comes on the 1st col and odd no's squares comes on the 1st row 
  // so we find wether the max element of given row,col is even or odd
    if(l&1){
        if(x<y) return l*l+x;
        else return l*l+2*l-y+2;
    }else{
        if(x<y) return l*l+2*l-2;
        else return l*l+y;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}



