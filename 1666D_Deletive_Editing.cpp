#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        string s, t;
        cin >> s >> t;

        // freq (hash) array for t 
        vector<int>freq(26,0);
        for(char &i:t) freq[i-'A']++;

        string temp;

        // traversing s backward
        for(int i=s.size()-1; i>=0; i--){
            char ch = s[i];
            if(freq[ch - 'A'] > 0){
                temp += ch;
                freq[ch - 'A']--;
            }
        }
        reverse(temp.begin(), temp.end());

        if(temp == t) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}