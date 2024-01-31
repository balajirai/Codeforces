#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool flag = true;
    string s = to_string(n);
    for (auto c : s){
        if (c != '4' and c != '7'){
            flag = false;
            break;
        }
    }
    // checking divisibility
    if(flag == false){
        int x = stoi(s);
        if (x%4==0 or x%7==0 or x%47== 0) flag = true;
        else   flag = false;
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}