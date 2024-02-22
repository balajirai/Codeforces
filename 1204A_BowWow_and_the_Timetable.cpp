#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s;
    cin>>s;

    int n = s.size(), count = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '1') count++;
    }

    if(n % 2 == 0) cout << n/2 << endl;
    else cout << n/2 + (count >  1) << endl;
    
    return 0;
}