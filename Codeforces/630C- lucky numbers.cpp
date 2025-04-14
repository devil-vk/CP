#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;
ll f(ll n ){
	return (ll)pow(2,n+1) - 2 ;
}

int main()
{
	long long int n;
	scanf("%lld",&n) ;	
	printf("%lld\n",f(n)) ;
	
    return 0;
}


/*
code uses pow(2, n+1), which is a floating-point function. For the given constraints (1 ≤ n ≤ 55), pow(2, n+1) can be accurately represented as a double, and converting it to a long long works correctly because the result is within the range of a 64-bit integer.

However, relying on floating-point operations for integer calculations is generally not recommended because it can lead to precision errors, especially for very large exponents. In this problem, since n is at most 55,

2^56 = 72,057,594,037,927,936 which is well within the range of a 64-bit integer (long long can hold up to (2^63) −1 );
*/

//my code

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

int binpow(int a, int b, int mod) {
    int res = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    // Calculate 2^(n+1) - 2 mod 1e9+7
    int ans = (binpow(2, n + 1, mod) - 2;
    if (ans < 0) ans += mod; // Ensure the result is non-negative
    cout << ans << endl;
    return 0;
}
