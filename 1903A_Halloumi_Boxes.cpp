#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n, k;
        cin>>n>>k;

        vector<int>a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        if(k > 1) cout << "YES" <<endl;
        else{
            vector<int> b = a;
            sort(b.begin(), b.end());
            if(a == b) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    
    return 0;
}