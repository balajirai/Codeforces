#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int r = 0;
        for(int i=0; i<n; i++){
            if(s[i] == 'R') r++;
        }

        if(r==0 or r==n){
            cout<<-1<<endl;
            continue;
        }

        for(int i=0; i<n-1; i++){
            if(s[i] == 'R' and s[i+1] == 'L'){
                cout<<0<<endl;
                break;
            }
            else if(s[i] == 'L' and s[i+1] == 'R'){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    
return 0;
}