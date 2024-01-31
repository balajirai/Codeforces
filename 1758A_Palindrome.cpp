#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;

        string s2 = s;
        reverse(s.begin(), s.end());
        s = s2+s;
        cout<<s<<endl;
    }
    
return 0;
}