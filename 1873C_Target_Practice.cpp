#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        char arr[10][10];
        int points = 0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                cin>>arr[i][j];
                if((i==0 || j==0 || 9-i==0 || 9-j==0) && arr[i][j]=='X'){
                    points += 1;
                }
                else if((i==1 || j==1 || 9-i==1 || 9-j==1) && arr[i][j]=='X'){
                    points += 2;
                }
                else if((i==2 || j==2 || 9-i==2 || 9-j==2) && arr[i][j]=='X'){
                    points += 3;
                }
                else if((i==3 || j==3 || 9-i==3 || 9-j==3) && arr[i][j]=='X'){
                    points += 4;
                }
                else if((i==4 || j==4 || 9-i==4 || 9-j==4) && arr[i][j]=='X'){
                    points += 5;
                }
            }
        }
        cout<<points<<endl;
    }
return 0;
}