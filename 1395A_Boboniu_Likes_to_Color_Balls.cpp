#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
number of balls   :  r  g  b  w
after 1 operation : -1 -1 -1 +3

in one operation : odd frequency to even frequency or vice-versa
in two opetation : returns back to original odd-even frequency (odd-even frequency count same as original)

odd freq count   :  1      2     3                         4
is palindrome ?  : Yes     No   Yes (if r,g,b freq > 0)   Yes (if r,g,b freq > 0)

*/

int main(){
    int t;
    cin>>t;
    while (t--){
        ll r, g, b, w, odd = 0;
        cin>>r>>g>>b>>w;

        if(r&1) odd++; if(g&1) odd++; if(b&1) odd++; if(w&1) odd++;

        if(odd == 2 || odd >= 3 && (r == 0 || g == 0 || b == 0))  cout<< "No" <<endl;
        else cout<< "Yes" <<endl;
    }
    
    return 0;
}