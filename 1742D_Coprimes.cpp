#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        bool flag = false;
        
        for(int i=n-1; i>=1; i--){
            for(int j = i-1; j>=0; j--){
                if(__gcd(a[i], a[j]) == 1){
                    cout<<i+j+2<<endl;
                    flag = true;
                    break;
                }
                
            }
            if(flag == true) break;
        }
        if(flag == false) cout<<-1<<endl;
    }
    
return 0;
}