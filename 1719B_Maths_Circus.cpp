// Problem Code: 1719B
// solution by Balaji

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        long long n,k;
        cin>>n>>k;
        bool flag = false;
        for(long long i =1; i<n; i=i+2){
            if(((i+k)*(i+1))%4==0 or ((i+1+k)*(i))%4==0) flag = true;
        }
        if(flag==false) cout<<"NO"<<endl;
        else if (flag==true){
            cout<<"YES"<<endl;
            for (int i = 1; i < n; i=i+2){
                cout<<i<<" "<<i+1<<endl;
            }
            
        }
    }
    
return 0;
}