#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isVowel(char &ch){
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y') return true;
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') return true;
    return false;
}

void solve(string &s){
    string ans;
    for(int i=0; i<s.size(); i++){
        if(!isVowel(s[i])){
            s[i] = tolower(s[i]);
            ans.push_back('.');
            ans.push_back(s[i]);
        }
    }
    cout<< ans <<endl;
}

int main(){
    string s;
    cin>>s;

    solve(s);

    return 0;
}