#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++){
            int moves;
            string s;
            cin >> moves >> s;
            for (int j = 0; j < moves; j++){
                if (s[j] == 'U') a[i] = (a[i] - 1 + 10) % 10;
                else a[i] = (a[i] + 1) % 10;
            }
        }
        for(auto x:a){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}