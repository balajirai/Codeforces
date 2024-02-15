#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        ll w, h, k, p, first, last, area = 0;
        cin>>w>>h;
        for(int i=0; i<4; i++){
            cin>>k;
            for(int j=0; j<k; j++){
                cin>>p;
                if(j==0) first = p;
                else if(j==k-1) last = p;
            }
            ll base = last-first;
            if(i<2) area = max(area, base*h);
            else area = max(area, base*w);
        }
        cout<< area <<endl;
    }
    
    return 0;
}