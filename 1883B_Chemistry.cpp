#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n, k; string s;
        cin>>n>>k>>s;

        unordered_map<char, int>freq;
        for(char &ch:s){
            freq[ch]++;
        }

        int odd=0;
        for(auto x:freq){
            if(x.second & 1) odd++;
        }

        if(odd <= (k+1)) cout << "YES" <<endl;
        else cout << "NO" << endl;

    }
    
    return 0;
}