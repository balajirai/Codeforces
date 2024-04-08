#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;

        int n = s.size();
        int ans = n;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int temp = 10*(s[i]-'0') + (s[j]-'0');
                if(temp%25==0){
                    ans = min(ans, n-(i+2));
                }
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}