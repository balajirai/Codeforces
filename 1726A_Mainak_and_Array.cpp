#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int ans=0;
        for(int i=0;i+1<n;i++){
            ans=max(ans,v[i]-v[i+1]);
        }

        ans=max(ans,v[n-1]-v[0]);
 
        int mini=INT_MAX;
        for(int i=0;i+1<n;i++){
            mini=min(mini,v[i]);
        }

        ans=max(ans,v[n-1]-mini);
 
        int maxo=0;
        for(int i=1;i<n;i++){
            maxo=max(maxo,v[i]);
        }
        
        ans=max(ans,maxo-v[0]);
        cout<<ans<<endl;
    }
    
    return 0;
}