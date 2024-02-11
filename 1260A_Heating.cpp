#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    cin>>n;
    while (n--){
        ll c, sum;
        cin>> c >> sum;

        ll minK = sum/c, rem = sum % c;
        vector<ll>k(c, minK);
        
        for(ll &x:k){
            if(rem > 0) x++, rem--;
        }

        ll ans = 0;
        for(ll &x:k){
            ans += x*x;
        }
        
        cout<< ans <<endl;
    }
    
    return 0;
}