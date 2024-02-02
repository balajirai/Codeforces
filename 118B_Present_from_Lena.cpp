#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n){
    for (int row = -n; row <= n; ++row){
        int top = n - abs(row);

        for (int i = 0; i < abs(row); ++i){
            cout << "  ";
        }

        for (int i = 0; i < top; ++i){
            cout << i << " ";
        }

        for (int i = top; i > 0; --i){
            cout << i << " ";
        }

        cout << 0 << endl;
    }
}

int main(){
    int n;
    cin>>n;

    solve(n);
    
    return 0;
}