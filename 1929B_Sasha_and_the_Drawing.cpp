#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        ll n, k;
        cin>>n>>k;

        if(k == 4*n-2) cout << (k+1)/2 + 1 <<endl;
        else cout << (k+1)/2 <<endl;
    }
    
    return 0;
}