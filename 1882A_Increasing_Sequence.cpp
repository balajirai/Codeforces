#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        long long ans = 0;
        for(int i=0; i<n; i++){
            if(arr[i] == ++ans) ans++;
        }
        cout<<ans<<endl;
    }
return 0;
}