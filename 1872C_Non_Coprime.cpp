// non-coprime split
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        long long l,r;
        cin>>l>>r;
        if(l==r) cout<<-1<<endl;
        else{
            bool flag = false;
            long long ans1 = 0, ans2 = 0;
            for(long long i=2; i<r; i++){
                for(long long j=i+1; j<r; j++){
                    if(i+j <= r && i+j >=l && __gcd(i,j) != 1){
                        ans1 = i;
                        ans2 = j;
                        flag =true;
                        break;
                    }
                }
            }
            if(flag){
                cout<<ans1<<" "<<ans2<<endl;
            }
            else cout<<-1<<endl;
        }
    }
    

return 0;
}