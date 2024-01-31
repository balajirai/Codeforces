#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        string ns;
        for (int i=0; i<3; i++)
            ns += toupper(s[i]); 
        if(ns=="YES") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }    
return 0;
}