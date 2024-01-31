#include <bits/stdc++.h>
using namespace std;

long long solve(long long x, long long n){
    long long res = 0;
    for (long long d = 1; d*d <= x; d++){
        if (x % d) continue;
        if (d*n <= x)  res = max(res, d);
        if (x/d*n <= x) res = max(res, x/d);
    }
    return res;
}

int main(){
    int t;
    cin>>t;
    while (t--){
        long long x, n;
        cin>>x>>n;

        long long ans = solve(x, n);
        cout << ans << endl;
    }
    
    return 0;
}