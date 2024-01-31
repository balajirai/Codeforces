#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(ll n){
    string num = to_string(n);
    int sz = num.size();
    for(int i=0; i<sz; i++){
        if(i==0 && sz == 1) continue;
        if(i==0 && num[i] == '9') continue;
        if((num[i] - '0') > ('9' - num[i])){
            num[i] = char('9' - num[i] + 48);
        }
    }
    return stoll(num);
}

int main(){
    ll n;
    cin>>n;
    cout<<solve(n)<<endl;
    return 0;
}