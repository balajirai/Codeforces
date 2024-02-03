#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n, m, ans = INT_MAX;
    cin >> n >> m;

    if(n < m ){
        cout<< -1 <<endl;
        return 0;
    }

    for(int y=0; y<=n; y++){
        if((n+y)%2==0){
            int total = (n+y)/2;
            if(total%m==0){
                ans = min(ans, total);
            }
        }
    }

    cout<< ans << endl;
    
    return 0;
}

/*

n = 2*x + y
2*x = n-y
x = (n-y)/2

x + y = (n+y)/2

now we have to minimize x+y in such a way that it is divisible by m

*/