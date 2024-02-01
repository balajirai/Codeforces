#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>week(7);
    for(int i=0; i<7; i++) cin>>week[i];

    int pages = 0, ans = 0, i = 0;
    while(pages < n){
        pages += week[(i++)%7];
        ans = (++ans)%7;
        if(ans == 0) ans = 7;
    }

    cout<< ans <<endl;
    
    return 0;
}