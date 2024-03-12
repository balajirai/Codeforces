#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n; bool flag = true;
        cin>>n;

        vector<ll>a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        for(int i=1; i<n-1; i++){
            if(a[i] >= 2*a[i-1] && a[i+1] >= a[i-1]){
                a[i+1] -= a[i-1];
                a[i] -= 2*a[i-1];
                a[i-1] -= a[i-1];
            }
            else{
                flag = false;
                break;    
            }
        }
        if(a[n-1] == 0 && a[n-2] == 0 && flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}