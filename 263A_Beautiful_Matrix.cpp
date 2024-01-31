#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int x = 0, y = 0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            int num;
            cin>>num;
            if(num == 1){
                x = i, y = j;
            }
            
        }
    }
    
    int ans = abs(2-x) + abs(2-y);
    cout<< ans <<endl;
    
    return 0;
}