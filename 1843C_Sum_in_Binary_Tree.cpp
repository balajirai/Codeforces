#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        long long ans, n;
        cin>>n;
        ans = n;
        while(n>0){
            ans += n/2;
            n /= 2;
        }
        cout<<ans<<endl;
    }
return 0;
}