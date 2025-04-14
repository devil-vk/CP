#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int arr[n];
    int min=INT_MAX,max=INT_MIN,max_count=0,min_count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
            max_count=1;
        }else if(arr[i]==max){
            max_count++;
        }
        
        if(arr[i]<min){
            min=arr[i];
            min_count=1;
        }else if(arr[i]==min){
            min_count++;
        }
    }

  // iif max == min then beauty diff=0 and no of ways = (mincount C 2);
    if(max==min){
        cout<<"0 "<<min_count*(min_count-1)/2;
    }
    else{
        cout<<max-min<<" "<<min_count*max_count;
    }
    return 0;
}
