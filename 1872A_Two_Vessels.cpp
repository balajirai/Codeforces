#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int a,b,c,ans=0;
        cin>>a>>b>>c;
        if(a==b){
            ans = 0;
        }
        else if(a<b){
            while (a<b){
                ans++;
                a += c;
                b -= c;
                if(a==b) break;
            }
        }
        else{
            while (a>b){
                ans++;
                a -= c;
                b += c;
                if(a==b) break;
            }
        }
        cout<<ans<<endl;
    }
    
return 0;
}