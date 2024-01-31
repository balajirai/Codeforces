#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if(n%2 == 0){
            cout<<"YES"<<endl;
            for(int i=0; i<n/2; i++){
                cout<<"1 -1 ";
            }
            cout<<endl;
        }
        else if (n == 3) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            int z = n/2;
            for(int i=0; i<n/2; i++){
                cout<< 1-z << " " << z <<" ";
            }
            cout<<1-z<<endl;
        }
    }
return 0;
}