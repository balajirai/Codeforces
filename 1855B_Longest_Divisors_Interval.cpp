#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;

        ll counter = 1;
        while(counter <= n){
            if(n%counter == 0) counter++;
            else break;
        }

        cout << counter-1 << endl;
    }
    
    return 0;
}