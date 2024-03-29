#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        ll n, k;
        cin >> n >> k;
        vector<ll>a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        sort(a.begin(), a.end());
        
        ll count = 1, maxi = 1;
        for(int i=0; i<n-1; i++){
            if(a[i+1] - a[i] <= k){
                count++;
                maxi = max(maxi, count);
            }
            else count = 1;
        }

        cout << n-maxi << endl;
    }
    
    return 0;
}