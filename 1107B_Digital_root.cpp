#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
number       : 1 2 3 4 5 6 7 8 9   10 11 12 13 14 15 16 17 18  19 20 21 22 23 24 25 26 27  ..........
digital root : 1 2 3 4 5 6 7 8 9    1  2  3  4  5  6  7  8  9   1  2  3  4  5  6  7  8  9  ..........

kth number whose digital root is x :  9*(k-1) + x
*/

int main(){
    int n;
    cin>>n;
    while (n--){
        ll k,x;
        cin>>k>>x;
        cout<< 9*(k-1) + x <<endl;
    }
    
    return 0;
}