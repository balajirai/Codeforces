#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll x, y, z;
    cin>>x>>y>>z;

    ll rem1 = x%z, rem2 = y%z;

    if((x+y)/z == x/z + y/z) cout<< (x+y)/z << " " << 0 << endl;
    else cout<< (x+y)/z << " " << min(min(rem1, rem2), min(z-rem1, z-rem2)) << endl;

    return 0;
}