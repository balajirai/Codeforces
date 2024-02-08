#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin >> n;

        string ans;
        vector<int>freq(26);
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            
            for(int j=0; j<26; j++){
                if(freq[j] == x){
                    ans += 'a' + j;
                    freq[j]++;
                    break;
                }
            }
        }
        cout<< ans << endl;        
    }
    return 0;
}