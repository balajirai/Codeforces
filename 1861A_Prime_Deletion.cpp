#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        int one = 0;
        int three = 0;
        for(int i=0; i<9; i++){
            if(s[i] =='1') one = i;
            if(s[i] == '3') three = i; 
        }
        if(one < three) cout<<13<<endl;
        else cout<<31<<endl;
    }
return 0;
}