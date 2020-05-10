#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        string s;
        cin>>s;
        int count = 0;
        // if there is an n digit number inside the string
        // then there are 2 possibilities -
        // first is that, the n digit number occurs in between the string,
        // in such a case there will be, some other character, other than a digit, 
        // after the nth digit character i.e. s[i+1] will be some other character
        // second is that, the n digit number occurs at the end in the string,
        // in such a case s[i+1] cannot be accessed
        // In both the cases count should be increased
        for(int i=0; i<len; i++){
            if(s[i]>=48 && s[i]<=57){
                if((s[i+1]<48 || s[i+1]>57) && (i+1)<len)
                    count++;
                if(i+1==len)
                    count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
