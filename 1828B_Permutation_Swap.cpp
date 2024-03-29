#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n, b;
        cin>>n;
        
        int ans = 0;
        for(int i=1; i<=n; i++){
            cin>>b;
            if(abs(b-i) != 0){
                ans = __gcd(ans, abs(b-i));
            }
        }

        cout << ans << endl;

    }
    
    return 0;
}