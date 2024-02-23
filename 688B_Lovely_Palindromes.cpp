#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*

1  -> 11      (2-digit)
2  -> 22      (2-digit)
3  -> 33      (2-digit)
........
9  -> 99      (2-digit)

10 -> 1 00 1  (4-digit)
11 -> 1 11 1  (4-digit)
12 -> 1 22 1  (4-digit)
............
19 -> 1 99 1  (4-digit)
20 -> 2 00 2  (4-digit)
21 -> 2 11 2  (4-digit)

*/

int main(){
    string s;
    cin>>s;

    string rev = s;
    reverse(rev.begin(), rev.end());

    cout << s + rev << endl;
    
    return 0;
}