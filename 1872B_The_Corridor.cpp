#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int>d(n);
        vector<int>s(n);
        for(int i=0; i<n; i++){
            cin>>d[i]>>s[i];
        }

        int k = INT_MAX;  // infinite rooms are there

        for(int i=0; i<n; i++){
            int temp = (s[i]-1)/2;
            k = min(k, temp+d[i]);
        }
        cout<<k<<endl;
    }
return 0;
}