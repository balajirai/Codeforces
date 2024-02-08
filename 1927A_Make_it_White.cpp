#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n; bool flag = true;
        cin>>n;
        int start = 0, end = 0;
        for(int i=0; i<n; i++){
            char ch;
            cin>> ch;
            if(ch == 'B' && flag){
                flag = false;
                start = i;
            }
            if(ch == 'B') end = i;
        }
        cout << end-start+1 <<endl;
    }
    
    return 0;
}