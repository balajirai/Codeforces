#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;

    while(n--){
        int p,v,t;
        int count=0;
        cin>>p>>v>>t;

        if (p) count++;
        if (v) count++;
        if (t) count++;

        if (count>=2) ans++;
    }
cout<<ans;
return 0;
}
