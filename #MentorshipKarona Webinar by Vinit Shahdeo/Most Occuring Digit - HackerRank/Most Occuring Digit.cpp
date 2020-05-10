#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        // Since the number is very large,
        // hence input is in the form of a string
        string s;
        cin>>s;
        
        // Store the frequency of each character in the map
        map<char,int> mp;
        int len = s.length();
        for(int i=0; i<len; i++){
            mp[s[i]]++;
        }
        
        // Find the character with maximum frequency and print it
        int max = INT_MIN;
        int max_val;
        for(auto x:mp){
            if(x.second==max){
                // To convert a digit char to int subtract char '0'
                int val = x.first-'0';
                if(val>max_val){
                    max_val = val;
                }
            }
            if(x.second>max){
                max = x.second;
                max_val = x.first-'0';
            }
        }
        cout<<max_val<<endl;
    }
    return 0;
}
