#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll a, b, s;
    cin >> a >> b >> s;

    ll minSteps = abs(a) + abs(b);

    if(a==0 && b==0){
        if(s%2==0) cout<< "Yes" <<endl;
        else cout << "No" <<endl;
    }
    else if(s == minSteps) cout<< "Yes" <<endl;
    else if(s > minSteps){
        if(minSteps%2 == s%2) cout<< "Yes" <<endl;
        else cout << "No" <<endl;
    }
    else cout << "No" <<endl;
    
    return 0;
}