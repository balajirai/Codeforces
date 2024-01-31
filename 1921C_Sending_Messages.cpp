#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool solve(ll n, ll f, ll a, ll b, vector<ll>&time){
    ll t0 = 0;
    for(ll i=0; i<n; i++){
        ll diff = time[i] - t0;
        ll d1 = diff*a, d2 = b;

        if(d1 > d2) f -= d2;
        else f -= d1;

        t0 = time[i];
    }
    if(f > 0) return true;
    else return false;
}

int main(){
    int t;
    cin>>t;
    while (t--){
        ll n, f, a, b;
        cin>>n>>f>>a>>b;

        vector<ll>time(n);
        for(ll i=0; i<n; i++) cin>>time[i];

        bool ans = solve(n, f, a, b, time);
        cout<< (ans ? "YES" : "NO") <<endl;
    }
    
    return 0;
}