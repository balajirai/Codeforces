#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*

In an AP : a, b, c

1)  b-a = c-b
2)  2*b = a + c
3)  a = 2*b - c
4)  c = 2*b - a


*/

int main(){
    int t;
    cin>>t;
    while (t--){
        ll a, b, c, count = 0;
        cin >> a >> b >> c;

        if(b-a == c-b) cout << "YES" << endl;
        else if((a+c)% (2*b) == 0) cout << "YES" << endl;
        else if ( (2*b - c) > 0 && (2*b - c) % a == 0) cout << "YES" << endl;
        else if ( (2*b - a) > 0 && (2*b - a) % c == 0) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    
    return 0;
}