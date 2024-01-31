#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<pair<int, int>>athlete;
        for(int i=0; i<n; i++){
            int s,e;
            cin>>s>>e;
            athlete.push_back({s,e});
        }
        int strength = athlete[0].first;
        int endurance = athlete[0].second;

        bool flag = true;
        for(int i=1; i<n; i++){
            if(athlete[i].first>=strength){
                if(athlete[i].second >= endurance){
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            cout<<strength<<endl;
        }
        else cout<<-1<<endl;
    }
    
return 0;
}