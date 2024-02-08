#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n, k;
        cin>>n>>k;

        vector<int>ans(n+1);
        int low = 1, high = n;

        for(int i=1; i<=k; i++){
            for(int j=i; j<=n; j+=k){
                if(i & 1) ans[j] = low++;
                else ans[j] = high--;
            }
        }

        for(int i=1; i<=n; i++){
            cout<< ans[i] <<" ";
        }
        cout<<endl;
    }
    
    return 0;
}