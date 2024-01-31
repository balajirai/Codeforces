#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        ll a, b;
        cin>>a>>b;
        ll lcm = (a*b)/__gcd(a,b);
        if(b % a == 0) cout<< (b*b)/a <<endl;
        else cout<< lcm <<endl;
    }
    return 0;
}