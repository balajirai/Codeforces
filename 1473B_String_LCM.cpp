#include <bits/stdc++.h>
#define ll long long
using namespace std;

/* for a and b : LCM = (a*b)/HCF */

int main(){
    int q;
    cin >> q;
    while (q--){
        string s, t;
        cin>>s>>t;

        int n1 = s.size(), n2 = t.size();
        int lcm = (n1*n2)/__gcd(n1, n2);

        string r1 = "", r2 = "";
        for(int i=0; i<lcm/n1; i++) r1 +=s;
        for(int i=0; i<lcm/n2; i++) r2 +=t;

        if(r1==r2) cout << r1 << endl;
        else cout << -1 << endl;
    }

    return 0;
}