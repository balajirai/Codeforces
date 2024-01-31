#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int drink_toast = (k*l/nl), lime_toast = c*d, salt_toast = (p)/np;
    int mini = min({drink_toast, lime_toast, salt_toast});

    cout<< mini/n <<endl;
    
    return 0;
}