#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n, k;
        cin>>n>>k;

        string s;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) {
                char ch = 'a' + j;
                s += ch;
            }
        }

        cout << s << endl;
    }
    
    return 0;
}