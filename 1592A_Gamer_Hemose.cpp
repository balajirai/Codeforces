#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,h;
        cin>>n>>h;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int maxi1=0, maxi2=0;
        for(int i=0;i<n;i++){
            if(a[i]>maxi1){
                maxi2 = maxi1;
                maxi1 = a[i];
            }
            else if(a[i]>maxi2) maxi2=a[i];
        }
        int que = h/(maxi1+maxi2);
        int rem = h%(maxi1+maxi2);

        if(rem==0) cout<<que*2<<endl;
        else if(rem<=maxi1) cout<<que*2 + 1<<endl;
        else cout<<que*2 + 2<<endl;        
    }
    return 0;
}