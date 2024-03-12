#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n, m, k;
        cin>>n>>m>>k;
        vector<int>left(n), right(m);

        for(int i=0; i<n; i++) cin>>left[i];
        for(int i=0; i<m; i++) cin>>right[i];

        sort(left.begin(), left.end());
        sort(right.begin(), right.end());

        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(left[i] + right[j] <= k){
                    ans++;
                }
                else break;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}