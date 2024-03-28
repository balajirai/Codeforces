#include <bits/stdc++.h>
#define ll long long
using namespace std;

// dx -> direction x, dy -> direction y
int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

int main(){
    int t;
    cin>>t;
    while (t--){
        ll a, b, xk, yk, xq, yq;
        cin>> a >> b >> xk >> yk >> xq >> yq;

        set<pair<int, int>> st1, st2;
        for(int i = 0; i < 4; i++){
            st1.insert({xk+dx[i]*a, yk+dy[i]*b});
            st2.insert({xq+dx[i]*a, yq+dy[i]*b});
            st1.insert({xk+dx[i]*b, yk+dy[i]*a});
            st2.insert({xq+dx[i]*b, yq+dy[i]*a});
        }

        int ans = 0;
        for(auto x : st1){
            if(st2.find(x) != st2.end()) ans++;
        }

        cout << ans << endl;
    }
    
    return 0;
}