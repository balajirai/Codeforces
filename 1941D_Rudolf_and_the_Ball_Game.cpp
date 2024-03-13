#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n, m, x;
        cin>>n>>m>>x;
 
        vector<int> a(n+1), b(n+1);
 
        a[x-1] = 1;
 
        for(int i=0; i<m; i++){
            int d;
            char c;
            cin>>d>>c;
 
            fill(b.begin(), b.end(), 0);
 
            for(int j=0; j<n; j++){
                if(!a[j]) continue;
 
                if(c=='0' || c=='?')    b[(j+d)%n] = 1;
                if(c=='1' || c=='?')    b[(n+(j-d))%n] = 1;
            }
 
            a = b;
        }
 
        cout<< count(a.begin(), a.end(), 1)<<endl;
        for(int i=0; i<n; i++){
            if(a[i]) cout<<i+1<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}