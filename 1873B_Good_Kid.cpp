#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        int mini = INT_MAX;
        for(int i=0; i<n; i++) mini = min(arr[i], mini);
        int ans = 1;
        for(int i=0; i<n; i++){
            if(arr[i]==mini){
                arr[i] = mini+1;
                break;
            }
        }
        for(int i=0; i<n; i++) ans *= arr[i];
        cout<<ans<<endl;
    }
return 0;
}