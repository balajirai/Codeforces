#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        long long a[n];

        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        
        bool flag = false;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(a[i] == a[j]){
                    cout<<"NO"<<endl;
                    flag = true;
                    break;
                }
                
            }
            if(flag == true) break;
            
        }
        if(flag == false) cout<<"YES"<<endl;
    }
    
return 0;
}