#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n; string s;
        cin>>n>>s;

        int ans =  0, res = 0;
        for(int i=0; i<n-2; i++){
            if(s.substr(i, 3) == "..."){
                ans = 2;
                break;
            }
        }
        if(ans) cout<< ans << endl;
        else cout<< count(s.begin(), s.end(), '.') << endl;        
    }
    
    return 0;
}