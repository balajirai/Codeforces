#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n, ones = 0, zeros = 0;
        cin>>n;
        for(int i=0; i<n; i++){
            int input;
            cin>> input;
            if(input == 0) zeros++;
            else if(input == 1) ones++;
        }
        
        ll ans = ones * pow(2, zeros);
        cout << ans << endl;
    }
    
    return 0;
}