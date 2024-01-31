#include <bits/stdc++.h>
using namespace std;

void ans(string a, string b, int n){
    if (a == b){
        cout << "YES" << endl;
        return;
    }
    bool flag = 0;
    for (int i = 0; i < n - 1; i++){
        if (a[i] == '0' && b[i] == '0' && a[i + 1] == '1' && b[i + 1] == '1') flag = 1;
    }
    if (flag){
        cout << "YES" << endl;
        return;
    }
    cout<<"NO"<<endl;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        string a, b;
        cin >> a >> b;
        int n = a.size();
        ans(a,b,n);
    }
    return 0;
}