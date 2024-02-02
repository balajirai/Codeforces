#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n, ll m){
    ll moves = 0;
    ll quotient = m / n;

    while (quotient % 2 == 0) {
        quotient /= 2;
        moves++;
    }

    while (quotient % 3 == 0) {
        quotient /= 3;
        moves++;
    }

    if (quotient != 1) {
        cout << -1 << endl;
    }
    else{
        cout << moves << endl;
    }
}

int main(){
    ll n, m;
    cin>>n>>m;

    if(m % n != 0){
        cout<< -1 << endl;
        return 0;
    }

    solve(n, m);
    
    return 0;
}