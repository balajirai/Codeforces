// Problem Code : 1720A
// solution by Balaji

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==0 and c==0) cout<<0<<endl;
        else if((a==0 and c!=0) or (a!=0 and c==0)) cout<<1<<endl;
        else{
            long long g1,g2;
            g1 = __gcd(a,b);
            g2 = __gcd(c,d);
            a/=g1;
            b/=g1;
            c/=g2;
            d/=g2;
            if(a==c and b==d) cout<<0<<endl;
            else if((b==d and c%a==0) or (b==d and a%c==0)) cout<<1<<endl;
            else if((a==c and b%d==0) or (a==c and d%b==0)) cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
    
return 0;
}