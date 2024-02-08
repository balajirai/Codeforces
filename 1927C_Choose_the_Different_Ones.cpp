#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n, m, k, x;
        cin >> n >> m >> k;

        set<int>s1, s2;
        for(int i=0; i<n; i++){ 
            cin>>x; s1.insert(x);
        }

        for(int i=0; i<m; i++){
            cin>>x; s2.insert(x);
        }

        bool notFound = false;
        int cntA = 0, cntB = 0;

        for(int i=1; i<=k; i++){
            if(!s1.count(i) && !s2.count(i)){
                notFound = true;
                break;
            }
            cntA += s1.count(i);
            cntB += s2.count(i);
        }

        if(notFound) cout<< "NO" <<endl;
        else if(min(cntA, cntB) < k/2) cout<< "NO" <<endl;
        else cout<< "YES" <<endl;
    }
    return 0;
}