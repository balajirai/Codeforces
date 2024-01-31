#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<long long> nums(2*n);
        for(int i=0; i<2*n; i++){
            cin>>nums[i];
        }
        sort(nums.begin(), nums.end());

        cout<< abs(nums[n] - nums[n-1]) <<endl;
    }
    return 0;
}