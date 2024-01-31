#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        // using binary search on answers
        long long low = 0, high = 2e9+7;
        while (low<=high){
            long long mid = (low+high)/2;
            long long water_retained = 0;
            for(int i=0; i<n; i++){
                water_retained += max(mid-arr[i], 0LL);
            }
            if(water_retained > x) high = mid-1;
            else low = mid+1;
        }
        cout<<low-1<<endl;
    }
    
return 0;
}