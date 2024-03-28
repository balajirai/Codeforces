#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        ll n, k, x;
        cin>> n >> k >> x;
        
        ll mini = k*(k+1)/2;
        ll maxi = n*(n+1)/2 - ((n-k)*(n-k+1)/2);

        // if x in range (mini, maxi) then yes otherwise no
        if(x >= mini && x <= maxi) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}