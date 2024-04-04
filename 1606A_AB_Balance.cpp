#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        string s;
        cin >> s;

        // make first and last character same
        int n = s.size();
        if(s[0] == s[n-1]) cout << s << endl;
        else {
            s[n-1] = s[0];
            cout << s << endl;
        }
    }
    
    return 0;
}