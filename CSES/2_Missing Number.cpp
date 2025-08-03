#include <iostream>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin>>n;
    int sum1=n*(n+1)/2;
    int sum2=0;
    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        sum2+=x;
    }
    cout<<sum1-sum2<<endl;
    return 0;
}
