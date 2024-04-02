#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        ll n, maxi = LONG_LONG_MIN;
        cin>>n;
        vector<ll>a(n);
        map<ll,ll>mp;
        for(int i=0; i<n; i++){
            cin>>a[i];
            mp[a[i]]++;
            maxi = max(maxi, mp[a[i]]);
        }
        
        // unequal elements
        ll unequalElements = n - maxi;

        ll operations = unequalElements;

        while (unequalElements > 0){
            operations++;
            unequalElements -= maxi;
            maxi = maxi*2;
        }

        cout << operations << endl;
        
    }
    
    return 0;
}