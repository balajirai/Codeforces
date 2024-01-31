#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string ab;
        cin >> ab;

        bool flag = false;

        for (int i = 1; i < ab.size(); i++) {
            string a_str = ab.substr(0, i);
            string b_str = ab.substr(i);

            int a = stoi(a_str);
            int b = stoi(b_str);

            if (a > 0 && b > 0 && b > a && a_str[0] != '0' && b_str[0] != '0') {
                cout << a << " " << b <<endl;
                flag = true;
                break;
            }
        }
        if(!flag) cout<<-1<<endl;
    }
    return 0;
}
