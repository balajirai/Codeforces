#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    vector<vector<int>>a(m,vector<int>(n,1)), b(m, vector<int>(n));

    // taking input and updating a
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> b[i][j];
            if(b[i][j] == 0){
                for(int k=0; k<n; k++) a[i][k] = 0;
                for(int k=0; k<m; k++) a[k][j] = 0;
            }
        }
    }

    // validating a
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(b[i][j] == 1){
                int sum = 0;
                for(int k=0; k<n; k++) sum += a[i][k];
                for(int k=0; k<m; k++) sum += a[k][j];
                if(sum == 0){
                    cout << "NO" <<endl;
                    return 0;
                }
            }
        }
    }

    cout << "YES" <<endl;
    
    // printing a
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    return 0;
}