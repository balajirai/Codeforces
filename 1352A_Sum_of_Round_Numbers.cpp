#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n){
    int count = 0;
    vector<int>ans;
    while(n){
        int rem = n%10;
        int res = pow(10, count);
        if(rem != 0){
            if(res != 0) ans.push_back(rem*res);
            else ans.push_back(rem);
        }
        count++;
        n /= 10;
    }
    cout<< ans.size() <<endl;
    for(int &a:ans){
        cout<< a <<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        solve(n);
    }
    
    return 0;
}