#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;

        ll mini = (n >= 6) ? ceil(n/6.0) : 1;
        ll maxi = (n >= 4) ? (n/4) : 1;

        if(n >= 4 && n % 2 == 0) cout << mini << " " << maxi << endl;
        else cout << -1 << endl;
    }
    
    return 0;
}