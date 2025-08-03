#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9;

signed main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;int sum=0;
        cin >> n;
        int i=(n-1)/3;
        int j=(n-1)/5;
        int k=(n-1)/15;
        int ans=3*i*(i+1)/2+5*j*(j+1)/2-15*k*(k+1)/2;
        cout<<ans<<endl;
    }
    return 0;
}

// THE below code gives TLE for larger values of n;
/*
#include<bits/stdc++.h>
using namespace std;
const int mod=1e9;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;int sum=0;
        cin >> n;
        for(int i=1;i<n%mod;i++){
            if(i%3==0||i%5==0){
                sum+=i;
                sum%=mod;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}

*/
