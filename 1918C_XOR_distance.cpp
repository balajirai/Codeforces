#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll a, ll b, ll r){
	ll ans = 0;
	bool flag = false;
 
	if (a < b) swap(a, b);
 
	for (int i = 59; i >= 0; i --) {
		int l = (a >> i & 1);
		int m = (b >> i & 1);
		ll x = (1LL << i);
 
		if (l != m) {
			if (x <= r && flag && l == 1) {
				ans -= x;
				r -= x;
			}
            else {
				flag = true;
				ans += x * (l - m);
			}
		}
	}
 
	cout << ans << endl;
}

int main(){
    int t;
    cin>>t;
    while (t--){
        ll a, b, r;
        cin>> a >> b >> r;

        solve(a, b, r);
    }
    
    return 0;
}