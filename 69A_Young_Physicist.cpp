#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    cin>>n;

    int xsum = 0, ysum = 0, zsum = 0;
    for(int i=0; i<n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        xsum += x, ysum += y, zsum += z;
    }

    if(xsum == 0 && ysum == 0 && zsum == 0) cout << "YES" <<endl;
    else cout << "NO" <<endl;
    
    return 0;
}