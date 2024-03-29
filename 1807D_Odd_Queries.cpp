#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n, q;
        cin >> n >> q;

        // using prefix sum
        vector<int>preSum(n);
        for(int i=0; i<n; i++){
            cin>>preSum[i];
            if(i!=0){
                preSum[i] += preSum[i-1];
            }
        }

        while(q--){
            int l, r, k;
            cin >> l >> r >> k;
            l = l-1, r = r-1;

            ll subtract = preSum[r] - (l==0 ? 0 : preSum[l-1]);
            ll ans = preSum[n-1] - subtract + k * (r-l+1);

            if(ans & 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    
    return 0;
}


/*

// TLE --------------------------------

int main(){
    int t;
    cin>>t;
    while (t--){
        int n, q;
        cin >> n >> q;

        ll sum = 0;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum += a[i];
        }

        while(q--){
            int l, r, k;
            cin >> l >> r >> k;
            l = l-1, r = r-1;

            ll subtract = 0;
            for(int i=l; i<=r; i++){
                subtract += a[i];
            }

            ll ans = sum - subtract + k * (r-l+1);
            if(ans & 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    
    return 0;
}

*/