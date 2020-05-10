#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len = s.length();
        int fl_lower=0;
        
        // if first character is in lowercase set the flag
        if(islower(s[0]))
            fl_lower=1;
        
        int temp;
        for(int i=1; i<len; i++){
            temp = s[i];
            
            // if lowercase flag is set, then current character should be in uppercase and
            // then lowercase flag should be unset
            // else current character should be in lowercase and 
            // then lowercase flag should be set
            if(fl_lower==1){
                s[i] = toupper(temp);
                fl_lower=0;
            }
            else{
                s[i] = tolower(temp);
                fl_lower=1;
            }
        }
        
        // Updated string should be printed
        cout<<s<<endl;
    } 
    return 0;
}
