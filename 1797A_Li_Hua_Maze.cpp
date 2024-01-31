#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        ll n,m,x1,y1,x2,y2;
        cin>>n>>m>>x1>>y1>>x2>>y2;
        ll maxi = max((x1==1 || x1==n)+(y1==1 || y1==m), (x2==1 || x2==n)+(y2==1 || y2==m));
        cout<<4-maxi<<endl;
    }
return 0;
}