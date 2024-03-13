#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n, x;
        cin>>n>>x;

        vector<int>a(n);
        int prev = 0, maxDiff = 0;
        for(int i=0; i<n; i++){
            cin>> a[i];
            maxDiff = max(maxDiff, a[i]-prev);
            prev = a[i];
        }
        maxDiff = max(maxDiff, 2*(x-prev));
        cout << maxDiff << endl;
    }
    
    return 0;
}