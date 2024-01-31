// Problem link : https://codeforces.com/contest/1779/problem/C
// solution by Balaji

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int long long n, m;
        cin>>n>>m;
        int long long arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int long long op = 0;
        int long long sum = 0;

        priority_queue<int long long, vector<int long long>, greater<int long long>>pq;
        for(int i=m; i<n; i++){
            if(arr[i]<0) pq.push(arr[i]);
            sum+=arr[i];
            while(sum<0){
                int x = pq.top();
                pq.pop();
                x = -1*x;
                sum+=(2*x);
                op++;
            }
        }

        if(arr[m-1] <= 0) sum = arr[m-1];
        else if (m!=1){
            sum = -1*(arr[m-1]);
            op++;
        }

        priority_queue<int long long>pp;
        for(int i = m-2; i>=1; i--){
            if(arr[i] > 0) pp.push(arr[i]);
            sum+=arr[i];
            while(sum>0){\
            
                int x = pp.top();
                pp.pop();
                x = -1*x;
                sum+=(2*x);
                op++;
            }
        }
        cout<<op<<endl;
    }
    
return 0;
}