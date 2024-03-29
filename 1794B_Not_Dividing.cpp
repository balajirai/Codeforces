#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0; i<n; i++){
            cin>> a[i];
            if(a[i] == 1) a[i] += 1;
        }

        for(int i=0; i<n-1; i++){
            while(a[i+1] % a[i] == 0){
                a[i+1] += 1;
            }
        }

        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << endl;

    }
    
    return 0;
}