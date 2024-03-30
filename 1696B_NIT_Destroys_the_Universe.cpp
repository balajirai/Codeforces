#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        int count = 0, prev = 0;

        // count changes from 0 to non-zero
        for(int i=0; i<n; i++){
            if(a[i] != 0 && prev == 0){
                prev = 1;
                count++;
            }
            else if(a[i] == 0 && prev == 1){
                prev = 0;
            }
        }

        // if count is more that 2 then take whole array and convert all element to lets say x (smallest number which is not in array)
        // lets numbers in array are 2 0 4 0 9 98 3 2 ---> so take smallest number which is not there that is 1 
        // in second step convert that x to 0
        cout << min(count,2) << endl;
    }
    
    return 0;
}