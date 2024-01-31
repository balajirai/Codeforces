#include<bits/stdc++.h>
#define int long long
using namespace std;

int a[105];

signed main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int ma = max_element(a,a+n)-a;
		int mi = min_element(a,a+n)-a;

		int ans = min({max(ma,mi)+1,max(n-ma,n-mi),mi+1+n-ma,ma+1+n-mi});
		
		cout<<ans<<endl;
	}
	return 0;
}