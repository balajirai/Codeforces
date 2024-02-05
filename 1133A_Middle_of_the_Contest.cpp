#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int h1, m1, h2, m2;
    char c;
    cin >> h1 >> c >> m1 >> h2 >> c >> m2;

    // convert into minutes
    int min1 = h1*60 + m1;
    int min2 = h2*60 + m2;

    int mid = (min1+min2)/2;

    int hrs = mid/60;
    int min = mid%60;

    // cout formate
    if(hrs>9 && min>9) cout<< hrs << ":" << min <<endl;
    else{
        if(hrs<10) cout<< "0" << hrs;
        else cout << hrs;

        cout<< ":" ;

        if(min<10) cout<< "0" << min;
        else cout << min;

        cout << endl;
    }
    
    return 0;
}