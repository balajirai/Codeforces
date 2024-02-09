#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    vector<int>drink(k+1);
    for(int i=0; i<n; i++){
        int x; cin>>x;
        drink[x]++;
    }
    int sets = ceil(n/2.0);
    int odd = 0, even = 0;

    for(int i=1; i<=k; i++){
        if(drink[i]%2){
            even += drink[i]-1;
            odd++;
        }
        else even += drink[i];
    }

    int ans =  2*min(even/2, sets);
    sets -= min(even/2, sets);
    ans += sets;

    cout<< ans << endl;

    return 0;
}