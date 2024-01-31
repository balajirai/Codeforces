#include <bits/stdc++.h>
using namespace std;

int const N = 1e6+10;
vector<bool> primes(N, 1);

void PrimeSieve(){
    primes[0] = primes[1] = false;
    for (int i = 2; i < N; i++){
        if (primes[i] == true){
            for (int j = i * i; j < N; j += i){
                primes[j] = false;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    long long arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    PrimeSieve();

    for (int i = 0; i < n; i++){
        if (primes[(int)sqrt(arr[i])]){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
