#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, m, k, x, maxi1 = 0, maxi2 = 0;
    cin >> n >> m >> k;

    for(ll i=0; i<n; i++){
        cin >> x;
        if(x > maxi1) maxi2 = maxi1, maxi1 = x;
        else if(x > maxi2) maxi2 = x; 
    }

    ll repeat = m / (k+1);
    ll rem = m % (k+1);

    ll happiness = (k*maxi1 + maxi2)*repeat + rem*maxi1;

    cout << happiness <<endl;

    return 0;
}