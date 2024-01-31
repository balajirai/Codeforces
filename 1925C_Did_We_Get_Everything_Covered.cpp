#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n, int k, int m, string &str){
    unordered_set<char>st; string ans = "";
    for(int i=0; i<str.size(); i++){
        st.insert(str[i]);
        if(st.size() == k){
            ans.push_back(str[i]);
            st.clear();
        }
    }

    if(ans.size() >= n) cout<< "YES" <<endl;
    else{
        cout<< "NO" <<endl;
        char missing;
        for(int i=0; i<k; i++){
            char ch = (char)('a' + i);
            if(st.count(ch) == 0){
                missing = ch;
            }
        }
        while(ans.size() < n) ans.push_back(missing);
        cout<< ans <<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while (t--){
        int n, k, m; string str;
        cin >> n >> k >> m >> str;

        solve(n, k, m, str);
    }
    
    return 0;
}