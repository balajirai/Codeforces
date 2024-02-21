#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        ll k, x, a;
        cin>>k>>x>>a;

        ll curr = 1;
        ll initial = a;

        for(int i=1; i<x; i++){
            ll next = curr/(k-1);
            next++;
            curr += next;
            if(curr > a){
                break;
            }
        }

        a -= curr;
        a *= k;

        if(a > initial) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    
    return 0;
}