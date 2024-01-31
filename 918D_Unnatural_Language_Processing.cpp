#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isC(char ch){
    if(ch == 'b' || ch == 'c' || ch == 'd') return true;
    else return false;
}

void solve(int &n, string &s){
    vector<string>res;
    for(int i=0; i<n; i++){
        string word = "";
        if(isC(s[i]) && (i+1 < n && !isC(s[i+1]))){
            word.push_back(s[i]);
            word.push_back(s[i+1]);
            res.push_back(word);
            i++;
        }
        else{
            word = res.back();
            res.pop_back();
            word += s[i];
            res.push_back(word);
        }
    }

    int len = res.size();
    for(int i=0; i<len; i++){
        if(i != len-1) cout<< res[i] << ".";
        else cout<< res[i] <<endl;
    }

}

int main(){
    int t;
    cin>>t;
    while (t--){
        int n; string s;
        cin>>n>>s;
        solve(n, s);
    }    
    return 0;
}