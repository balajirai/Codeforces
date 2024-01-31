// problem code 1391B
// solution by Balaji

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        int m;
        vector<string> g;
        cin>>n>>m;
        g=vector<string>(n);
        for(auto &i:g){
            cin>>i;
        }
        int ans=0;
        for(int i=0;i<n;++i){
            if(i<n-1){
                g[i][m-1]=='R'?++ans:0;
            }
            else{
                for(auto &j:g[i]){
                    j=='D'?++ans:0;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}