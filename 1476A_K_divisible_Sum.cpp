#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        double n, k;
        cin>>n>>k;
        ll factor = ceil(n/k);
        k = k*factor;
        ll res = ceil(k/n);
        cout << res << endl;
    }
    
    return 0;
}