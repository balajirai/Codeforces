#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        // when n is even
        if(n%2 == 0){
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        }
        // when n is odd
        else{
            cout << 4 << endl;
            cout << 1 << " " << n << endl;
            cout << 2 << " " << n << endl;
            cout << 1 << " " << 2 << endl;
            cout << 1 << " " << 2 << endl;
        }
    }
    
    return 0;
}