#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        ll a, b, n;
        cin >> a >> b >> n;

        vector<ll>tool(n);
        for(int i=0; i<n; i++) cin>>tool[i];

        ll ans = b;
        for(int i=0; i<n; i++){
            ans += min(a, 1+tool[i])-1;
        }

        cout << ans << endl;
    }
    
    return 0;
}