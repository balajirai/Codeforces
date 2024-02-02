#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll a, ll b, ll c){
    ll ans1 = -1, ans2 = -1;
    if(a < c){
        ans1 = 1;
    }
    if(a*b > c){
        ans2 = b;
    }
    cout<< ans1 <<" "<< ans2 <<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--){
        ll a, b, c;
        cin >> a >> b >> c;

        solve(a, b, c);
    }
    
    return 0;
}