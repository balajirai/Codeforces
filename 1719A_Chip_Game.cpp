#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        long long n,m;
        cin>>n>>m;
        if((n%2==0 and m%2==0) or (n%2!=0 and m%2!=0))
            cout<<"Tonya"<<endl;
        else if((n%2==0 and m%2!=0) or (n%2!=0 and m%2==0))
            cout<<"Burenka"<<endl;
    }
return 0;
}