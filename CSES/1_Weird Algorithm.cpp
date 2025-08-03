#include <iostream>
using namespace std;
#define int long long 
// got TLE because of not using it as long long since for large values of n - 3*n+1 will be > INT_MAX

signed main()
{
    int n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0) {
            n/=2;
            cout<<n<<" ";
        }else{
            n=(3*n)+1;
            cout<<n<<" ";
        }
    }
    return 0;

}
