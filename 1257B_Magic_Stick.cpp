#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        ll x, y;
        cin>>x>>y;

        if(y <= x) cout << "YES" << endl;
        else{
            if(x==2 && y==3) cout << " YES" << endl;
            else if(x > 3) cout << "YES" <<endl;
            else cout << "NO" << endl;
        }
    }
    
    return 0;
}