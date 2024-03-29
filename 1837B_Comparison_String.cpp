#include <bits/stdc++.h>
#define ll long long
using namespace std;

// longest consecutive either '<' or '>'
int solve(string s, char ch){
    int curr = 0, maxi = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == ch){
            curr++;
            maxi = max(maxi, curr);
        }
        else curr = 0;
    }
    return maxi;
}

int main(){
    int t;
    cin>>t;
    while (t--){
        int n; string s;
        cin>>n>>s;
        
        int ans1 = solve(s, '<');
        int ans2 = solve(s, '>');

        cout << max(ans1, ans2) + 1 << endl;

    }
    
    return 0;
}