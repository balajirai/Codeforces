#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool solve(string& a, string& b, string& c) {
    int n = a.size();
    for (int i = 0; i < n; ++i) {
        if (a[i] == b[i] and a[i] != c[i]) return true;
        if (a[i] != c[i] and b[i] != c[i]) return true;
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string a, b, c;
        cin>>a>>b>>c;
        if (solve(a, b, c)) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}