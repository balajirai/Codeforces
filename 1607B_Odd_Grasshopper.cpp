#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        ll x, n;
        cin >> x >> n;

        int jump = n % 4;
        ll totalJump = (n/4)*4 + 1;

        for(int i=1; i<=jump; i++){
            if(x&1) x += totalJump;
            else x -= totalJump;
            totalJump++;
        }

        cout << x << endl;
    }
    
    return 0;
}



/*

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        ll x, n, ans = 0, jump = 0;
        cin >> x >> n;

        // brute force
        while(jump++ < n){
            if(abs(x)&1) x += jump;
            else x -= jump;
        }

        cout << x << endl;
    }
    
    return 0;
}

*/