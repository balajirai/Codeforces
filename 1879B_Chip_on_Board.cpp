#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        long long arr1[n], arr2[n];
        for (int i = 0; i < n; i++) cin>>arr1[i];
        for (int i = 0; i < n; i++) cin>>arr2[i];

        sort(arr1, arr1+n);
        sort(arr2, arr2+n);

        long long ans1 = arr2[0]*n, ans2 = arr1[0]*n;
        for(int i=0; i<n; i++){
            ans1 += arr1[i];
            ans2 += arr2[i];
        }
        cout<<min(ans1,ans2)<<endl;
        
    }
    
return 0;
}