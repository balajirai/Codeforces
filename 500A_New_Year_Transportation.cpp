#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    vector<int>a(n);
    for(int i=1; i<n; i++) cin>>a[i];

    int pos = 1;
    while(pos < t){
        pos += a[pos];
    }

    cout<< (pos == t ? "YES" : "NO") <<endl;
    
    return 0;
}