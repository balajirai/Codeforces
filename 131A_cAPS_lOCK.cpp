#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s;
    cin >> s;

    if(s.size()==1){
        if(islower(s[0])) s[0] = toupper(s[0]);
        else s[0] = tolower(s[0]);
        cout<< s <<endl;
        return 0;
    }
    for(int i=1; i<s.size(); i++){
        if(islower(s[i])){
            cout<< s << endl;
            return 0;
        }
    }
    for(int i=0; i<s.size(); i++){
        if(i==0){
            if(islower(s[i])) s[i] = toupper(s[i]);
            else s[i] = tolower(s[i]);
        }
        else s[i] = tolower(s[i]);
    }

    cout<< s <<endl;
    
    return 0;
}