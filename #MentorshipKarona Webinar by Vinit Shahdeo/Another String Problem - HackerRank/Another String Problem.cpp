#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1;
        cin>>s2;
        // We concatenate string s1 twice
        // so if s2 is rotated version of s1
        // we will get s2 as a subtring in concatenated string
        // Also, length of s1 and s2 should be same to verify 
        // that s2 is rotated version of s1
        string tempConcat = s1+s1;
        if(s1.length() == s2.length() && tempConcat.find(s2) != string::npos)
            cout<<1;
        else
            cout<<0;
        cout<<endl;
    }
    return 0;
}