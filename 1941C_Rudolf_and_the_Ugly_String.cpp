#include <bits/stdc++.h>
#define ll long long
using namespace std;

int countSubstring(string &original, string &substring) {
    int count = 0;
    size_t pos = 0;

    while ((pos = original.find(substring, pos)) != string::npos) {
        ++count;
        pos += substring.length();
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while (t--){
        int n; 
        cin>>n;
        
        string s;
        cin>>s;

        string sub1 = "map", sub2 = "pie", sub3 = "mapie";

        int a = countSubstring(s, sub1);
        int b = countSubstring(s, sub2);
        int c = countSubstring(s, sub3);

        cout<< a+b-c << endl;
    }
    
    return 0;
}