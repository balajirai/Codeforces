#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;

        // (a2-a1) + (a3-a2) + (a4-a3) + .... + (an - an-1)  to be max, or simply (an - a1) to be max
        // simply sort the given array or just calculte the max_element - min_element
        
        vector<ll>arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];

        ll maxi = arr[0], mini = arr[0];
        for(int i=0; i<n; i++){
            maxi = max(maxi, arr[i]);
            mini = min(mini, arr[i]);
        }
        
        cout<< maxi - mini <<endl;
    }
    
    return 0;
}