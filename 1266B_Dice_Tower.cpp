#include <bits/stdc++.h>
#define ll long long
using namespace std;

// sum of opposit face is alway 7
// when dice is kept on floor min sum = 15 & max sum = 20 (one face is touching floor)
vector<int>nums = {15, 16, 17, 18, 19, 20};

int main(){
    int t;
    cin>>t;
    while (t--){
        ll n; bool flag = false;
        cin >> n;

        ll rem = n%14;
        for(int &x:nums){
            if(n >= 15 && x == (rem+14)) flag = true;
        }

        if(flag) cout<< "YES" <<endl;
        else cout<< "NO" <<endl;        
    }
    
    return 0;
}